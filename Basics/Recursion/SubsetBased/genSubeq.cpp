#include<iostream>
using namespace std;

void genSubSeq(char *in, char *out, int i, int j){
    // Base case
    if(in[i] == '\0'){
        out[j] = '\0';
        cout<< out<<endl;
        return;
    }

    // Rec case
    // Include current char
    out[j] = in[i];
    genSubSeq(in,out,i + 1, j + 1);

    // exclude the current char
    genSubSeq(in,out,i+1,j);
}

int main(){
    char input[] = "abc";
    char output[10];
    genSubSeq(input,output,0,0);
};