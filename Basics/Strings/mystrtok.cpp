#include<iostream>
using namespace std;

char *mystrtok(char *str,char delim){
    // State of static var is initilized only once in fucn call and subsi calls same state
    static char* input = NULL;
    if(str!=NULL){
        // First call
        input = str;
    }

    // Check Base case
    if(input == NULL) return NULL; // After final token has been returned!

    // Start extracting tokens and store em in an array
    char *output = new char[strlen(input) + 1]; // 1 for null char 
    int i =0;
    for(;input[i]!='\0';i++){
        if(input[i] != delim){
            output[i] = input[i];
        }else{
            // Space or delim
            output[i] = '\0';
            input = (input + i + 1); // Point from to current i plus 1
            return output;
        }
    }

    // Corner: last token we might not get a space 
        // Set a null and input as null

        output[i] = '\0';
        input = NULL;
        return output;
}


int main(){
    char s[100] = "Holy shit! today, is very, hot xD"; 

    char *ptr = mystrtok(s,' ');
    cout<< ptr<<endl;
    
    while(ptr!=NULL){
        ptr = mystrtok(NULL,' ');
        cout<<ptr<<endl;
    }
    return 0;
}