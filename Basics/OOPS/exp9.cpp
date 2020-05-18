#include<iostream>

using namespace std;

class Counter {
private:
	int number;
public:

	int display() {
		return number;
	}
	// Constructor
	Counter() {
		number = 0;
	}

	Counter& operator++();

};
Counter& Counter::operator++()
{
	number++;
	return *this;
}

int main() {

	Counter c1, c2, c3;

	cout << "-----Before----" << endl;
	cout << "C1 = " << c1.display() << endl;
	cout << "C2 = " << c2.display();

	c3 = ++c2;
	c2 = ++c1;


	cout << endl << "-----After----" << endl;
	cout << "C1 = " << c1.display() << endl;
	cout << "C2 = " << c2.display() << endl;
	cout << "C3 = " << c3.display() << endl;

	cout << "\n";
	return 0;
}