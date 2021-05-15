#include <iostream>
#include <vector>
using namespace std;
int main() {
  int t;cin>>t;
  while(t--){
  int n;cin>>n;
  vector<int> arr(n);
    for(int i=0;i<n;i++){int temp; cin>>temp; arr.push_back(temp);}
    int newlen =0;
    int len = arr.size();
    while(newlen < len ) {

      len = arr.size();
        for(int i=1;i<=arr.size();i++) {
            if (arr[i+1] != arr[i]){
              arr[i] += arr[i+1];
                arr.erase(arr.begin() + i);
            }
            newlen = arr.size();
        }
    }
    cout<<arr.size();


  }
}