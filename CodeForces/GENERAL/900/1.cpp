#include<iostream>

using namespace std;

string football(string a){
    int flag,flag2=0;
    // [0,1,0,0,1,1,1,1,0]
    for (auto c:a){
        if(c == '1'){
              flag++;
              flag2 = 0;
        }
        else if(c == '0'){
            flag2++;
            flag = 0;
        }
        if(flag > 6 or flag2 > 6) return "YES";
    }
    return "NO";
}

int main(){
    string s;
    cin>>s;
    cout<<football(s);
    return 0;
}