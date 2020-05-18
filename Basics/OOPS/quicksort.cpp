#include <iostream>
using namespace std;

void quickSort(int *array, int low, int high)
{
	int i = low;
	int j = high;
	int pivot = array[(i + j) / 2];
	int temp;

	while (i <= j)
	{
		while (array[i] < pivot)
			i++;
		while (array[j] > pivot)
			j--;
		if (i <= j)
		{

			// Swap the i and j elements
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
			j--;
		}
	}
	if (j > low) // low upto j
		quickSort(array, low, j);
	if (i < high) // i upto high
		quickSort(array, i, high);
}

void printArray(int *array, int n)
{
	for (int i = 0; i < n; ++i)
		cout << array[i] << ",";

	cout << "\n\n";
}


int main()
{
	int array[] = {95, 45, 48, 98, 1, 485, 65, 478, 1, 2325};

	int n = sizeof(array) / sizeof(array[0]);

	cout << "Before Quick Sort :" << endl;
	printArray(array, n);

	quickSort(array, 0, n);

	cout << "After Quick Sort :" << endl;
	printArray(array, n);
	return (0);
}
