class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxans=0;
        while(left<=right){
            int width=right-left;
            int length=min(height[left],height[right]);
            int ans=width*length; 
            if(height[left]<height[right])
               left++;
            else{
                right--;
            }
            maxans=max(ans,maxans);
        }
     return maxans;
    }
};