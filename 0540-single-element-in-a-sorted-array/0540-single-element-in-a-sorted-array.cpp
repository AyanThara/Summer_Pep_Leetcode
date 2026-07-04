/*class Solution {//binary search
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        //corner case to check if only 1 element is present then return it 
        int start=0;
        int end=n-1;
        while(start<end){
            int mid=start+(end-start)/2;//cal mid 
            if(mid==0 &&nums[0]!=nums[1]) return nums[0];
            //corner case for firset element i.e if first element is not equal to second element that its only single element as there is no elemennt before it to compare with
            if(mid==n-1 &&nums[n-1]!=nums[n-2]) return nums[n-1];
            //corner case for last element that if last element is not equal to element before it then it is only the single element as there is no element after that to compare with 
            if(nums[mid]!=nums[mid-1]||nums[mid]!=nums[mid+1]) return nums[mid];
            //compare with -1 and +1 element for mid if none match then return mid 
            if(mid%2==0){//even in case the mid is even we have to 
                   if(nums[mid-1]==nums[mid]){
                     end=mid-1; 
                   }else{
                    start=mid+1;
                   }
                }else{
                    //odd
                }
        }
    }
};*/


class Solution {//binary search
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        //corner case to check if only 1 element is present then return it
        int start=0;
        int end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;//cal mid
            if(mid==0 && nums[0]!=nums[1]) return nums[0];
            //corner case for first element i.e if first element is not equal to second element then its only single element as there is no element before it to compare with
            if(mid==n-1 && nums[n-1]!=nums[n-2]) return nums[n-1];
            //corner case for last element that if last element is not equal to element before it then it is only the single element as there is no element after that to compare with
            if(mid>0 && mid<n-1 &&
               nums[mid]!=nums[mid-1] &&
               nums[mid]!=nums[mid+1])
                return nums[mid];
            //compare with -1 and +1 element for mid if none match then return mid
            if(mid%2==0){
                //even in case the mid is even
                if(nums[mid]==nums[mid+1]){//left case
                    start=mid+1;
                }else{//right case
                    end=mid-1;
                }
            }else{
                //odd
                if(nums[mid]==nums[mid-1]){//right case
                    start=mid+1;
                }else{//left case 
                    end=mid-1;
                }
            }
        }
     return -1;
    }
};