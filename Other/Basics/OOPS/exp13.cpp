// Multilevel inheritance

#include<iostream>
#include<stdio.h>
using namespace std;

class Student
{
public:
	int grade;
	int age;
};

class Test: Student {
public:
	int b;
	Test() {
		cout << "Constructor for class Test" << endl;
	}
};

class Sports
{
public:
	void playFootball() {
		cout << "Playing Football...";
	}
};


class Exam: public Test, public Sports {
public:
	int c;
	Exam() {
		cout << "Constructor for class Exam" << endl;
		cout << "Class Exam inherits from class Student and class Sports" << endl;
	}

};

int main() {

	Exam exam;
	exam.playFootball();
	return 0;
}

