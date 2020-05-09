#include<bits/stdc++.h>
using namespace std;

void solve(){
  int T;
  cin>>T;
  while(T--){
    int n;
    cin>>n;
    vector<int> v1(n);
    vector<int> v2(n);
    for(int i=0;i<n;i++){
      cin>>v1[i];
    }
    for(int i=0;i<n;i++){
      cin>>v2[i];
    }
   sort(v1.begin() , v1.end());
   sort(v2.begin() , v2.end());
   long long int MMDS = 0; 
   for(int i=0;i<n;i++){
       MMDS += v2[i] * v1[i];
    }
   cout<<MMDS<<endl;
  }
  return ;
}


int main(){
  solve();
  return 0;
}