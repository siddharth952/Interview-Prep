#include <vector>
#include <iostream>

using namespace std;

int main() {

	// create a vector
	vector<int> vec;
	int i;

	// original size of vector
	cout << "vector size is = " << vec.size() << endl;

	// push values into the vector
	for (i = 0; i < 5; i++) {
		vec.push_back(i * i);
	}

	// display extended size of vec
	cout << "extended vector size = " << vec.size() << endl;

	// access 5 values from the vector
	for (i = 0; i < 5; i++) {
		cout << "value of vec [" << i << "] = " << vec[i] << endl;
	}

	// use iterator to access the values
	vector<int>::iterator v = vec.begin();
	while ( v != vec.end()) {
		cout << "value of v = " << *v << endl;
		v++;
	}

	return 0;
}