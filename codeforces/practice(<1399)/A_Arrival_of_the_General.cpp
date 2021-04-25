#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  scanf("%d", &n);
  vector<int> v(n);
  int min = 101, max = -1, maxPosition, minPosition ;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    if(v[i] > max ){
      max = v[i];
      maxPosition = i;
    }
    if(v[i] <= min){
      min = v[i];
      minPosition = i;
    }
  }
  int ans;
  if (maxPosition < minPosition){
    ans = n - 1 - minPosition + maxPosition;
  }
  else{
   ans = n - 1 - minPosition + maxPosition -1;
  }
  cout << ans;

  return 0;
}