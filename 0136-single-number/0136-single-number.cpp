class Solution {//using simple xor operator
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;//take a answer variable and start with 0 
        for (int x : nums)//run a for loop on whole nums
            ans ^= x;//xor ans with every val at that index 
        return ans;//return the ans
    }
};
//whole array will be cancle each other and unique element will be left

