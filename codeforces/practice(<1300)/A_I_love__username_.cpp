#include<bits/stdc++.h>
using namespace std;

int main(){
  int T;
  cin >> T;
  int max, min , count=0;
  cin >> max;
  min = max;
  while (--T){
    int n;
    cin >> n;
    if (n > max){
      max = n;
      count++;
    }if( n < min){
      min = n;
      count++;
    }
  }
  cout << count;
  return 0;
}