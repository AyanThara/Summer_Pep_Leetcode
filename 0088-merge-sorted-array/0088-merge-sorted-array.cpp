//beginner friendly approach creating an third  array and storing the in the third array 
/*class Solution {     
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> arr3; 
        int i = 0, j = 0;
        while(i < m && j < n) {
            if(nums1[i] < nums2[j]) {  //compare the element and store the lowest 
                arr3.push_back(nums1[i]); //in arr3 and update the index
                i++;a
            } else {
                arr3.push_back(nums2[j]);
                j++;
            }
        }
        while(i < m) {   
            arr3.push_back(nums1[i]);
            i++;
        }
        while(j < n) {
            arr3.push_back(nums2[j]);
            j++;
        }
 //storing back all the element to nums1 as given in question no extra space to be taken 
        for(int k = 0; k < m + n; k++) {             
            nums1[k] = arr3[k];
        }
    }
};*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while(i >= 0 && j >= 0){
            if(nums1[i] > nums2[j]){
                nums1[k] = nums1[i];
                k--;
                i--;
            } else {
                nums1[k] = nums2[j];
                k--;
                j--;
            }
        }
        while(j >= 0){
            nums1[k] = nums2[j];
            k--;
            j--;
        }
    }   
};



