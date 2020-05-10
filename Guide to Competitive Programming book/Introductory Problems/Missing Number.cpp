#include<bits/stdc++.h>
using namespace std;

void Missing_Number(){
   long long int n , ans;
   cin>>n; 
   ans = (n * (n+1)) / 2;
   long long int in;
   for(long long int i = 0;i<n-1;i++){
     cin>>in;
     ans -= in;
   }
 cout<<ans<<endl;
 return;
}

 int main(){
   Missing_Number();
   return 0;
 }