// Arithmancy is Draco Malfoy's favorite subject, but what spoils it for him is that Hermione Granger is in his class, and she is better than him at it. Prime numbers are of mystical importance in Arithmancy, and Lucky Numbers even more so. Lucky Numbers are those positive integers that have at least three distinct prime factors; 30 and 42 are the first two. Malfoy's teacher has given them a positive integer n, and has asked them to find the n-th lucky number. Malfoy would like to beat Hermione at this exercise, so although he is an evil git, please help him, just this once. After all, the know-it-all Hermione does need a lesson.

// Input
// The first line contains the number of test cases T. Each of the next T lines contains one integer n.

// Output
// Output T lines, containing the corresponding lucky number for that test case.

// Constraints
// 1 <= T <= 20
// 1 <= n <= 1000

// Example
// Sample Input:
// 2
// 1
// 2

// Sample Output:
// 30
// 42

//===================================================================================================

#include<bits/stdc++.h>
using namespace std;
#define max 3000

void sieve(vector<int> &v){
  for(int i = 2; i<= (max/2);i++){
      if(v[i]==0){
       for(int j= i*2;j<=max;j+=i){
          v[j] += 1;     
      } 
    }  
  }
  return;
}

int main(){
  int T;
  cin>>T;
  vector<int> v(max ,0);
   sieve(v);
  vector<int> ans; 
   for(int i=0;i<=max;i++){
     if(v[i]>=3){
         ans.push_back(i);
     }
   }
   while(T--){
    int n;
    cin>>n;
    cout<<ans[n-1]<<endl;;
   }
  return 0;
}