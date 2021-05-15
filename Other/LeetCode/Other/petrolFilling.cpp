#include<iostream>
using namespace std;

int getTour(int petrol[] ,int distance[],int n){
    int sum=0,start=0,diff=0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + petrol[i] - distance[i];

            if(sum<0){
                start = i+1; // Change start point
                diff += sum; // Storing neg values
                sum = 0; // start again from new station
            }
        }
        return sum+diff>0 ? start: -1;
}
int main(){
    int a[4] = {4,6,7,4};
    int b[4] = {6,5,4,5};
    int res = getTour(a,b,4);
    cout<<"RESULT: "<<res;

    return 0;
}