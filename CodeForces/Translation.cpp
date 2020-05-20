#include<bits/stdc++.h>
int main(){
    
    string s1,s2;
    cin>>s1>>s2;
    isEq(s1,s2);
    
    return 0;
}

void isEq(string s1,string s2){
    if(reverse(s1.begin(),s1.end() ) s2){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    
}