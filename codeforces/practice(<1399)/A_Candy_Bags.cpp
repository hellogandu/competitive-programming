#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  for (int i = 1; i <= (n * n) / 2 ;i+=n/2){
    for (int j = i ; j < i + n/2; j+=1){
      cout << j << " " << n * n - j + 1<< " ";
    }
    cout << endl;
  }
    return 0;
}