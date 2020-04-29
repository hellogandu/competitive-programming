// Given two binary strings, A (of length 10) and B (of length 5), output 1 if B is a substring of A and 0 otherwise.

// Please note, that the solution may only be submitted in the following languages: Brainf**k, Whitespace and Intercal.

// Input
// 24 lines consisting of pairs of binary strings A and B separated by a single space.

// Output
// The logical value of: 'B is a substring of A'.

// Example
// First two lines of input:

// 1010110010 10110
// 1110111011 10011
// First two lines of output:
// 1
// 0
//================================================================================================

#include<bits/stdc++.h>
using namespace std;
int main() {
    int T = 24;
    string a ;
    string b;
    while(T--){
        cin>>a>>b;
        int ans = 0;
        int flag = 1;
        for(int i=0; i<a.size()-b.size() ; i++){
            int flag = 1;
            for(int j=0 ;j<b.size(); j++){
                if(a[i+j] != b[j]){
                    flag = 0;
                }
            }
            ans = ans || flag;
        }
    cout<<ans<<endl;
    }
    return 0 ;
}