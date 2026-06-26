class Solution {//kadanes algo 
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();//take a variable and intialize with nums.size
        int currsum=0;//take currsum as 0
        int maxsum=INT_MIN;//and max sum as -infinite
        for(int i=0;i<n;i++){//run the loop till n 
            currsum+=nums[i];//update currsum with nums[i]
            maxsum=max(currsum,maxsum);//check max of currsum and maxsum
            if(currsum<0)//if currsum id less than 0 reintilze it with 0
            currsum=0;
        }
    return maxsum;//return max sum
    }
};
/*
class Solution {//brute force approach 
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxsum = nums[0];
        for(int i = 0; i < n; i++){
            int currsum = 0;   
            for(int j = i; j < n; j++){
                currsum += nums[j];   // use j
                maxsum = max(maxsum, currsum);
            }
        }
        return maxsum;
    }
};*/



