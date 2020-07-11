#include<iostream>
using namespace std;

// 2048 --> two zero four eight

char words[][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};


void intToSpell(int n){
    if(n == 0) return;

    intToSpell( n / 10 ); // 204
    int digit = n % 10;
    cout<< words[digit] << " ";
    return;
}

int main(){
   intToSpell(2048);
   return 0;

}