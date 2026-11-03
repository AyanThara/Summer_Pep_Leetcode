class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;//create a ans vector
        for(int i = 0; i < nums1.size(); i++) {
            ans.push_back(nums1[i]);//add the elements of 1st array in ans 
        }
        for(int i = 0; i < nums2.size(); i++) {
            ans.push_back(nums2[i]);//add the elements of 2nd array in ans
        }
        sort(ans.begin(), ans.end());//sort the ans 
        int n = ans.size();//store the size of ans in n variable
        if(n % 2 == 1) {//check is the size of ans array odd if yes 
            return ans[n / 2];//then return the n/2 element 
        }
        else {//else 
            return (ans[n / 2] + ans[n / 2 - 1]) / 2.0;//return n/2 and n/2+1 th element /2;
        }
    }
};