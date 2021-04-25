#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  int n, total=0 , maxPeople = INT_MIN;
  cin >> n;
  while(n--){
    int exit, enter;
    cin >> exit >> enter;
    total = total - exit + enter;
    maxPeople = max(total, maxPeople);
  }
  cout << maxPeople;
  return 0;
}
