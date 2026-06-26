class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i = 1; i < nums.size(); i++){//start a loop from inex 1 and run till last index
            nums[i] += nums[i - 1];//in current index uodate with last elements sum
        }
       return nums;//return the whole vector
    }
};
