#include<bits/stdc++.h>
using namespace std;

int main(){
  int T;
  cin >> T;
  while(T--){
    int n, upvote_count = 0;
    cin >> n;
    while(n--){
      int r;
      cin >> r;
      if(r!=2){
        upvote_count++;
      }
    }
    cout << upvote_count << endl;
  }
  return 0;
}