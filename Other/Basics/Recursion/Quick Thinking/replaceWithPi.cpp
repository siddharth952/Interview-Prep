#include<iostream>
using namespace std;


void replaceWithPi(char a[],int i){
    if(a[i] == '\0' or a[i+1] == '\0') return;

    // Look for PI at current loc
    if(a[i] == 'p' and a[i+1] == 'i'){
        // Shift rest and replace with 3.14
        int j=i+2;

        // j to end of array
        while(a[j] != '\0')
            j++;
        
        // Shifting Right to Left !! Not left to right as replace some of the chars
        while(j >= i+2){
            a[j+2] = a[j]; // [ a b c . . . . e f g \0 ]
            j--;
        }

        // Replacement + recursive call for remaining part
        a[i] = '3';
        a[i+1] = '.';
        a[i+2] = '1';
        a[i+3] = '4';

        // Call for next
        replaceWithPi(a,i+4);
    }
    else{
        // We got to next position
         replaceWithPi(a, i+1);
    }

    return;

}

int main(){
    char a[] = "abcdepisvff$!pis@@";
    replaceWithPi(a,0);
    cout<<a;

}