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

void solve(){
   int number_of_student,time;
   cin >> number_of_student>>time;
   string studentQueue;
   cin >> studentQueue;
   while(time--){
   loop(i , 0 , number_of_student - 2){
    if(studentQueue[i] == 'B' && studentQueue[i+1] == 'G'){
		studentQueue[i] = 'G';
		studentQueue[i+1] = 'B';
		i+=1;
		}
   }
 }
   cout<<studentQueue<<endl;
   return ;  
}

int main(){
ios::sync_with_stdio(0);
cin.tie(0);

  solve();
 return 0;
}
