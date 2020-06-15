/*
what is anagram = it is that we can construct s2 from s1 if true then s2 is anagram of s1
array hash table of size 26 if special char also then it would be 126 char

methods:

O(N^2):

O(N):
    [a,s,g,d,v,s,t]     s1
    [h ,s ,t, a, w ,r]  s2
    Take a hash table of 26 size 
    from s1 each char inc. in hashArr
    from s2 



if no duplicated we can use Bit set
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1 = "decimal";
    string s2 = "medicazl";
    int i,H[26] = {0};

    for (int i = 0; i < s1.size(); i++)
        // Use this as an index of hash table and incremented by 1
        H[s1.at(i)-97] += 1;
    
    for (int i = 0; i < s2.size() ; i++){
        H[s2.at(i)-97] -= 1;
        // Check if it has become -1
        if(H[s2.at(i)-97] < 0){
            cout<<"Not Anagram";
                break;
        }
            
    }
    cout<<"Anagram";

    return 0;
}

