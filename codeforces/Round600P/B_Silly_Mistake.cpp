#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define loop(i,a,b) for (int i = a; i <= b; i++)

int WAIT = 1, ENTERED = 2, LEAVE = 3;

void view(vector<int> v){
  for (int i : v){
    cout << i << " ";
  }
  cout << endl;
}

void solve(){
  int n, count=0,a;
  vi state(1000001) ;
  cin >> n;
  vi result, current;
  for (int i = 0; i < n;i++){
    cin >> a;
    int guy = abs(a);
    if( state[guy] == WAIT ){
      cout << "-1" << endl;
      return;
    }
    if(a > 0){
       if(state[guy] != ENTERED){
         state[guy] = ENTERED;
         count++;
         current.push_back(a);
       }else{
         cout << "-1" << endl;
         return;
       }
    }else{
      if(state[guy] == ENTERED){
         state[guy] = WAIT;
         count--;
         current.push_back(guy);
       }else{
         cout << "-1" << endl;
         return;
       }
    }
     if(count==0){
       result.push_back(current.size());
       for(int j : current){
         state[j] = 0;
       }
       current.clear();
     }
  }

  if(count !=0){
    cout << "-1" << endl;
    return;
  }else{
    cout << result.size() <<endl;
    for (int i : result){
      cout << i << " ";
    }
  }
}

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
solve();
return 0;
}