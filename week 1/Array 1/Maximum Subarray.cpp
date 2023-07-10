class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int maxSum = -10000;
    int currSum = 0;
    for (auto& num : nums) {
        currSum = currSum < 0 ? num : currSum + num;
        maxSum = max(maxSum, currSum);
    }
    return maxSum;   
    }
};