#include<bits/stdc++.h>
using namespace std;
long long int generate_number(int n){
  long long int value = 1;
  while(--n){
    value = value * 10;
  }
  return value;
}

int main(){
  int T;
  cin >> T;
  while (T--) {
    int a, b, c;
    long long int x, y, z;
    cin >> a >> b >> c;
    x = generate_number(a);
    y = generate_number(b);
    z = generate_number(c);
    if(x > y){
      y += z;
    }else{
      x += z;
    }

    cout << x << " " << y << endl;
  }

  return 0;
}