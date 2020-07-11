#include <iostream>
using namespace std;

int stringToInt(char *a,int n){
    if (n == 0) return 0;
    
    int digit = a[n-1] - '0';
    int smallAns = stringToInt(a, n - 1); //123
    return smallAns * 10 + digit;
}

int main(){
    char a[] = "1234";
    int len = strlen(a);
    
    int c = stringToInt(a,len);

    cout<<c<<endl;
    cout<< c+1;
    return 0;
}