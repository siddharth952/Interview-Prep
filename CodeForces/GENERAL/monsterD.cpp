/*
https://atcoder.jp/contests/abc153/tasks/abc153_d

Wins when all monsters health = 0 or below
To Find the mim no of attacks Caracal needs to make before winning

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    long long h;
    cin>>h;

    long long b = 1;
    while (2 * b <= h)  b *= 2;


        cout << 2 * b - 1;

    return 0;
}

