class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        vector<int> ans;//create a ans vector
        for (int i = 1; i < height.size(); i++) {//start with index 1 as it is told that 0 index is always unstable
            if (height[i - 1] > threshold)//check if the previous one is greater than threshold 
                ans.push_back(i);//then push it back into the vector
        }
        return ans;//return the ans 
    }
};