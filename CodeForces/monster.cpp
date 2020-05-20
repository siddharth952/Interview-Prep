#include<bits/stdc++.h>
using namespace std;
int main(){
int N,K;
  vector<int> hr(N);
  cin>>N>>K;
  if(K>N){ cout<<0; return 0;}
  
  for(int i=0;i<N;i++){
    int input;
    cin>>input;
    hr[i] = input;
  }
  
  sort(hr.begin(),hr.end());
  while(K--){
  	hr.erase (hr.begin());
  
  }
  cout<<accumulate(hr.begin(), hr.end(), 0);
}