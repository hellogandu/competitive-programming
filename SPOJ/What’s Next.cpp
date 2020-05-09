#include<bits/stdc++.h>
using namespace std;

void checkAP(int a1 , int a2 , int a3){
   int b =  a2 - a1;
   if( (a2+b)== a3){
     cout<<"AP "<<(a3+b)<<endl;
   }
  return ;
}

void checkGP(int a1 ,int a2, int a3){
  if(a1==0){return;}
  double r = a2 / a1;
  if( (int)a2*r == a3){
    cout<<"GP "<<(int)(a3*r)<<endl;
  }
  return ;
}

void solve(){
  while(true){
  int a1 , a2 , a3;
  cin>>a1>>a2>>a3;
  if(a1 == 0 && a2 == 0 && a3 == 0){
    return ;
  }
  checkAP(a1 , a2 , a3);
  checkGP(a1 , a2 , a3);
  }
}

int main(){
  solve();
  return 0;
}