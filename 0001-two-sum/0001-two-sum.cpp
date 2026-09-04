class Solution {//brute force using two loops 
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {//check using two loops whether the sum of two numbers is equal to the target if yes return the pair sum
                    return {i, j}; 
                }
            }
        }
        return {}; 
    }
};


     