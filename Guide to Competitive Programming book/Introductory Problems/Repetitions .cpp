#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Repetitions(){
   string s;
   getline(cin , s);
   ll max_repete = 0 , count = 1;
   for(int i=0;i<s.size()-1;i++){
     if(s[i] != s[i+1]){
     	max_repete = max(count , max_repete);
     	count = 1;
     }else{
     	count+=1;
     }
   }
  max_repete = max(count , max_repete);
  cout<<max_repete<<endl;
 return ;
}

int main(){
	 Repetitions();
	return 0;
}