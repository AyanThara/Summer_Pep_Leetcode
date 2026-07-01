 //linear search brute force approach 0(N) time complexity 
/*class Solution {
public:
    int search(vector<int>& nums, int target) {
       for(int i=0;i<nums.size();i++){
          if(nums[i]==target){
            return i;
          }
       } 
     return -1;
    }
};

//optimal solution using binary search O(LOg N)
class Solution {
public:
    int binarySearch(vector<int>& nums, int low, int high, int target) {
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(nums[mid] == target)
                return mid;
            if(nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
         return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        // Find Pivot
        int pivot = 0;
        for(int i = 0; i < n - 1; i++) {
            if(nums[i] > nums[i + 1]) {
                pivot = i + 1;
                break;
            }
        }
        // Array not rotated
        if(pivot == 0)
            return binarySearch(nums, 0, n - 1, target);
        // Target in left half
        if(target >= nums[0])
            return binarySearch(nums, 0, pivot - 1, target);
        // Target in right half
        return binarySearch(nums, pivot, n - 1, target);
    }
};*/


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(nums[mid] == target)
                return mid;
            // Left half sorted
            if(nums[low] <= nums[mid]) {
                if(target >= nums[low] &&
                   target < nums[mid])
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            // Right half sorted
            else {
                if(target > nums[mid] &&
                   target <= nums[high])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }
        return -1;
    }
};