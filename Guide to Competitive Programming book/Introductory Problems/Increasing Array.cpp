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


 void Increasing_Array(){
     ll n , max_increasing_value = 0 , previous_value , present_value;
     cin>>n;
     cin>>previous_value;
     loop(i,0,n-2){
        cin>>present_value;
        max_increasing_value  +=  max((ll)0 , previous_value - present_value );
        previous_value = present_value + max((ll)0 , previous_value - present_value ); 
     }
     cout<<max_increasing_value<<endl;
     return;
 }


int main(){

  Increasing_Array();

  return 0;
}