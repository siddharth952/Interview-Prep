// To generate all subarrays ie, i ... j and j>=i and contiguous 

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr;
    int n =0;
    cin>>n;
    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        arr.push_back(input);
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                            cout<<arr[k]<<",";
                        }
                        cout<<endl;
        }
         
    }
     return 0;
}
