#include<iostream>
#include<math.h>


using namespace std;

class Polar {
private:
	double radius;
	double angle;

public:

	double getx() {
		return radius * cos(angle);
	}
	double gety()                 {
		return radius * sin(angle);
	}

	void display() {
		cout << radius << " | " << angle << endl;
	}



	// Constructor
	Polar() {
		radius = 0.0;
		angle = 0.0;
	}

	Polar(float r, float a)
	{
		radius = r;
		angle = a;
	}


	Polar operator +(Polar obj) {

		double x =	getx() +	obj.getx();
		double y =	gety() + obj.gety();
		double r =	sqrt(x * x + y * y); //converts x and y to
		double a =	atan(y / x);       //Polar co-ordinate.
		return Polar(r, a);

	}

};



int main() {

	Polar o1(10, 2), o2(10, 5), o3;

	o3 = o1 + o2;

	cout << "no1 =";
	o1.display();
	cout << "\\no2 =";
	o2.display();
	cout << "\\no3 =";
	o3.display();
	return 0;
}