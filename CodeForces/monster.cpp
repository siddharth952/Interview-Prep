#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(NULL);

int N,K;
cin>>N>>K;

  vector<int> hr(N);
  long long ans=0;
  if(K>N){ cout<<ans; return 0;}
  
  
  for(int i=0;i<N;i++){
    int input;
    cin>>input;
    hr[i] = input;
  }
  
  sort(hr.begin(),hr.end());
  // 0 1 2 3 4
  for (int i = 0; i < N-K; i++)
  {
      ans += hr[i];
  }
  
  cout<<ans;
  return 0;
}