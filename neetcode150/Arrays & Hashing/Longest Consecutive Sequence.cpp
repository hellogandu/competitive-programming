#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution{
public:
  int longestConsecutive(vector<int> &nums){
    unordered_map<int, int> umap;
    int arrLen = nums.size(), maxlen = 0;
    for (int i = 0; i < arrLen; i++){
      umap[nums[i]] = 1;
    }
    for (int i = 0; i < arrLen; i++){
      if(umap[nums[i]]== 1 ){
        int consecutiveLen = 0, j = nums[i];
        while (umap[j] >= 1 ){
          consecutiveLen += umap[j];
          umap[j] = 0;
          j++;
        }
        umap[nums[i]] = consecutiveLen;
        maxlen = max(consecutiveLen, maxlen);
      }
    }
   return maxlen;
  }
};

int main(){
  Solution solutionObject;
  vector<int> arr{0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
  cout<< solutionObject.longestConsecutive(arr);
  return 0;
}