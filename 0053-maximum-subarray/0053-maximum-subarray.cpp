class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;//start sum with 0 
        int maxsum=INT_MIN;//start max sum with - infinite to handle negative values
        int n=nums.size();//run till nums.size
        for(int i=0;i<n;i++){
            sum+=nums[i];//add the value in sum variable 
            maxsum=max(maxsum,sum);//calculate the maxsum
            if(sum<0)//if sum becomes 0 reintilize it with 0
            sum=0;
        }
    return maxsum;//return maxsum
    }
};