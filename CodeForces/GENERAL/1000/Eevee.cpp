#include<bits/stdc++.h>
using namespace std;
#define     FastIO           ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);

string poke[] = {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"},str;
int i,j;

	/*
		Can evolve into 8 pokemons
		But what it evolves into should fit the crossword


	*/
int main(){
	 #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    

	int n; cin>>n; // Len of string
	cin>>str;

	for (i = 0; i <= 7; ++i)
	{
		if (poke[i].size()!=n) continue;
		for (j = 0; j < n; ++j)
			if (str[j] != '.' and str[j] != poke[i][j]) break;

		if ( j==n )
			cout<<poke[i];
		
	}

return 0;
}