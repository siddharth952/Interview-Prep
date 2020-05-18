#include <iostream>     // std::cout
#include <cstddef>      // std::size_t
#include <valarray>     // std::valarray, std::slice

using namespace std;

int main ()
{
	valarray<int> foo (12);
	for (int i = 0; i < 12; ++i) foo[i] = i;

	valarray<int> bar = foo[std::slice(2, 3, 4)];

	cout << "slice(2,3,4):";
	for (size_t n = 0; n < bar.size(); n++)
		cout << ' ' << bar[n];
	cout << '\n';

	return 0;
}