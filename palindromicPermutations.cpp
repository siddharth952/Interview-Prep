/*
		13 - May - 2020
		Test whether letters forming a string can be permuated to form a palindrome
		Eg

		"edified" - > "deified"
*/
#include<bits/stdc++.h>
using namespace std;

int main() {

	cout << CanFormPalindrome("edified");
	return 0;
}


bool CanFormPalindrome(const string& s) {

	unordered_map<char, int> charFreq;

	for (char c : s) {
		++charFreq[c];
	}

// String can be permuted as a palindrome if and only if if num of char whose freq is odd is atmost 1

	int oddfreqCount = 0;

	return none_of(begin(charFreq), end(charFreq), [&oddfreqCount](const auto & p)) {
		return (p.second % 2) && ++oddfreqCount > 1;

	}

}