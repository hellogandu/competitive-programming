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
   string s;
   cin>>s;
   vector<int> ans;
   for(size_t i=0;i<s.size();i++){
    if(s[i] == '.'){
	 ans.push_back(0);
	}else{
	  if(s[i] == '-' && s[i+1] == '.'){
		ans.push_back(1);
		  
	   }else{
	   ans.push_back(2);
	   }
	   
	   i+=1;
	}
   }
   for(size_t i = 0 ; i< ans.size();i++){
   cout<<ans[i];
   }
   return ;
}

int main(){
ios::sync_with_stdio(0);
cin.tie(0);

  solve();
 return 0;
}
