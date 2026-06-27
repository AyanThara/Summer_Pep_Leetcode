class Solution {//simple two pointer approach
public:
    int maxArea(vector<int>& height) {
        int left=0;//take left and start with 0 index
        int right=height.size()-1;//take right with n-1 index
        int ans=0;//start ans with 0
        while(left<right){//run the loop till this condition is met
          int h=min(height[left],height[right]);//take h variable and calculate the min among the values of left and right 
          int w=right-left;//calcuale the width using index
          ans=max(ans,h*w);//store in ans and take max among previous ans and current heigth and width
          if(height[left]<height[right])//if left<right increment the left else decrement the right 
            left++;
          else
          right--;
        }
        return ans;//return ans 
    }
};



