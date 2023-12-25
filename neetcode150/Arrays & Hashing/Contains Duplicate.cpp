#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
  bool containsDuplicate(vector<int> &nums){
    int len = nums.size();
    unordered_map<int, int> umap(0);
    for (int i = 0; i < len; i++){
      umap[nums[i]] += 1;
      if (umap[nums[i]] == 2)
        return true;
    }
    return false;
  }
};

int main(){
  vector<int> arr{1, 3, 4, 3, 2, 4, 2};

  Solution solutionObject;

  cout << solutionObject.containsDuplicate(arr);

  return 0;
}
