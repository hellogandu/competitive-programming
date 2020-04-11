#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

#define NUMBER 1000000001

 vector<bool> arr(NUMBER , true); 

void seive(){
 arr[1]=false;
 for(long long int i=2; i*i <= arr.size();i++){
     cout<<i<<" ";
 if(arr[i]){
   for(long long int j = i*i;j<=arr.size();j+=i){
   arr[j]=false;
   }
 }
 }  
 return ; 
}

int main(){
  int T;
  scanf("%d" ,&T);
 
  seive();
  while(T--){
    long long int n , m;
    scanf("%d %d",&n,&m);
  for(long long int i=n;i<=m;i++){
     if(arr[i]) {
         cout<<i<<endl;
     }
  }

  }
  return 0;
}




//  bool checkprime(int num){
//   if(num==1) return false ; 
//   for(int i=2;i<=sqrt(num);i++){
//     if(num%i==0){
//         return false;
//     }
//   }
//   return true;
// }

// int main(){
//   int T;
//   scanf("%d" ,&T);
//   while(T--){
//     long long int n , m;
//     scanf("%d %d",&n,&m);
//     for(long long int i=n;i<=m;i++){
//      if(checkprime(i)){
//       printf("%d\n",i);
//      }     
//     } 
//     cout<<endl;
//   }
//   return 0;
// }