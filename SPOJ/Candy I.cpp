#include<bits/stdc++.h>
using namespace std;

void solve(){
  while(true){
   int n;
   cin>>n;
   if(n==-1){return;}
   vector<int> v(n);
   int avg = 0;
   for(int i=0;i<n;i++){
      cin>>v[i];
      avg += v[i]; 
   }
   if(avg % n != 0) {
     cout<<-1<<endl;
     continue;
   } 
  int count = 0;
  avg = avg / n;
  sort(v.begin() , v.end());
  int l = 0 , r = n-1;
  while(l<r){

    int t = v[r]-avg;
    int s =  avg - v[l];

    if(t >= s){
      v[l] += s;
      v[r] -= s;
      count += s; 
    }else{
      v[r] -= t;
      v[l] += t;
      count += t;
    }
    
    if(v[l] == avg){
      l++;
    }
    if(v[r] == avg){
      r--;
    }
  }
  cout<<count<<endl;
  }
}


int main(){
  solve();
  return 0;
}