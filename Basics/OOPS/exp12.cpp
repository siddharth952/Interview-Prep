#include<iostream>
#include<stdio.h>

using namespace std;

class Developer
{
public:
	Developer() {}
	Developer(const Developer &t)
	{
		cout << "Copy constructor called " << endl;
	}

	Developer& operator = (const Developer &t)
	{
		cout << " = operator called " << endl;
		return *this;
	}
};

// Driver code
int main()
{
	Developer t1, t2;
	t2 = t1;
	Developer t3 = t1;
	getchar();
	return 0;
}