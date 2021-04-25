#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  int n, sumOfX = 0, sumOfY = 0, sumOfZ=0;
  cin >> n;
  while(n--){
    int x, y, z;
    cin >> x >> y >> z;
    sumOfX += x;
    sumOfY += y;
    sumOfZ += z;
  }
  if(sumOfX==0 && sumOfY==0 && sumOfZ==0 ){
    cout << "YES";
  }else{
    cout << "NO";
  }
  return 0;
}
