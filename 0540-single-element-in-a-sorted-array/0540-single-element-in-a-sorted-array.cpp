class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (mid % 2 == 1) // Make mid even
                mid--;
            if (nums[mid] == nums[mid + 1]) {// Single element is on the right
                left = mid + 2;
            } else { // Single element is on the left (including mid)
                right = mid;
            }
        }
        return nums[left];
    }
};