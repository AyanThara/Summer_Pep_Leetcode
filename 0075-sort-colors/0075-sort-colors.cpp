/*class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(),nums.end());//brute force approach using in build sorting function o(nlogn)
    }
};*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0;
        int high = nums.size() - 1;
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else { 
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

