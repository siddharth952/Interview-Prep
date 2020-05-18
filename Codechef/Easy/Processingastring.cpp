#include<bits/stdc++.h>
/*
Given an alphanumeric string made up of digits and lower case Latin characters only, find the sum of all the digit characters in the string.
*/

using namespace std;
int countDigits(string str);

int main() {

	string s = "ab1231da";

	cout << countDigits(s);
	return 0;
}

int countDigits(string str) {
	int total = 0;
	for (char es : str) {
		if (es >= 48 && es <= 57) {
			total += es - '0';
		}


	}

	return total;
}

