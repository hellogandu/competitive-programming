// Transform the algebraic expression with brackets into RPN form (Reverse Polish Notation). Two-argument operators: +, -, *, /, ^ (priority from the lowest to the highest), brackets ( ). Operands: only letters: a,b,...,z. Assume that there is only one RPN form (no expressions like a*b*c).

// Input
// t [the number of expressions <= 100]
// expression [length <= 400]
// [other expressions]
// Text grouped in [ ] does not appear in the input file.

// Output
// The expressions in RPN form, one per line.
// Example
// Input:
// 3
// (a+(b*c))
// ((a+b)*(z+x))
// ((a+t)*((b+(a+c))^(c+d)))

// Output:
// abc*+
// ab+zx+*
// at+bac++cd+^*

//==================================================================================================

#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin>>T;
    while(T--){
      string str ;
      cin>>str;
     vector<char> value;
     vector<char> oprt;
     for(int i=0;i<str.size();i++){
         if(str[i]=='+' || str[i] == '*' || str[i]=='/' || str[i]=='^' || str[i]=='-'){
             oprt.push_back(str[i]);
         }else{
             if(str[i]==')'){
                 value.push_back(oprt[oprt.size()-1]);
                 oprt.pop_back();
             }else{
                 if(str[i]!='('){
                     value.push_back(str[i]);
                 }
             }
         }
     }
     for(int i=0;i<value.size();i++){
         cout<<value[i]<<"";
     }
     cout<<endl;
    }
    return 0 ;
}