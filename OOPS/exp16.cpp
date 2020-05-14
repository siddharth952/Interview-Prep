// valarray::max example
#include <iostream>     // std::cout
#include <valarray>     // std::valarray

int main ()
{
	int init[] = {20, 40, 10, 30, 23, 55, 123, 331, 231, 63, 35, 8, 1, 9, 1, 5, 2, 7, 23, 331};
	std::valarray<int> myvalarray (init, 19);
	std::cout << "The max is " << myvalarray.max() << '\n';

	return 0;
}