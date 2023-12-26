#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1, arrLen = nums.size();
        vector<int> resultArray(arrLen);
        resultArray[arrLen - 1] = nums[arrLen - 1];
        for (int i = arrLen - 2; i >= 0; i--) {
            resultArray[i] = nums[i] * resultArray[i + 1];
        }
        product = nums[0];
        resultArray[0] = resultArray[1];
        for (int i = 1; i < arrLen - 1; i++) {
            resultArray[i] = product * resultArray[i + 1];
            product *= nums[i];
        }
        resultArray[arrLen - 1] = product;
        return resultArray;
    }
};
void print(vector<int> arr) {
    for (auto x : arr) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    Solution solutionObject;
    vector<int> arr{-1, 1, 0, -3, 3};
    print(solutionObject.productExceptSelf(arr));
    return 0;
}