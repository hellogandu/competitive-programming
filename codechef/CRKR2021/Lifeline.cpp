#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool isCured(int age, int cured){
  if(age <= 18 && cured >=10){
    return true;
  }
  if(age <= 50 && cured >=14){
    return true;
  }
  if( cured >= 21 ){
    return true;
  }
  return false;
}

int minTime(int x,int y,int z){
  if(x){
    return 10;
  }
  if(y){
    return 14;
  }
  if(z){
    return 21;
  }
  return INT_MAX;
}

void solve(){
 int age, noOfbeds, cured;
    cin >> age >> noOfbeds >> cured;
    int x, y, z;
    cin >> x >> y >> z;

    if(!isCured(age, cured)){
      cout << "NO" << endl;
      return;
    }

    if( x+y+z < noOfbeds && isCured(age, cured)){
      cout << "YES" << endl;
      return;
    }

    int timeLeft = cured - minTime(x, y, z);
    if (isCured(age, timeLeft)){
       cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }

   return;
}

int main(){
  int T;
  cin >> T;
  while(T--){
    solve();
  }
  return 0;
}
