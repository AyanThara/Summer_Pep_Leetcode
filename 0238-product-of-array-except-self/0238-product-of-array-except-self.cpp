/*class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n=nums.size();
        vector<int>ans(n,1);//intilize a vector
        for(int i=0;i<n;i++){//start and run till n outter loop
            for(int j=0;j<n;j++){//run inner loop till n 
               if(i!=j) //if i==j then skip adding the product else add the prodcut in all other cases 
              ans[i]*=nums[j];//store in arr[i] vector 
               }
            }
        }
        return ans;//return the vector
    }
};
//o(n2) time complexity 
//space complexity 0(n) 


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n,1), suffix(n,1), ans(n);//create three vector suffix prefix and ans 
        // build prefix
        for(int i=1;i<n;i++){//run the loop and calculate the prefix 
            prefix[i] = prefix[i-1] * nums[i-1];//prefix =prefix of i-1 and * that num[i-1]number
        }
        // build suffix
        for(int i=n-2;i>=0;i--){//runt the loop and calculate the suvfix
            suffix[i] = suffix[i+1] * nums[i+1];//suffix =suffix of i+1 and * that num[i+1]number
        }
        // build answer
        for(int i=0;i<n;i++){
            ans[i] = prefix[i] * suffix[i];//multiply both prefox and suffix vector and store in ans vector 
        }
        return ans;//return ans vector
    }
}; //time complexity o(n)
   //space complexity o(n)

*/


//optimize best approach 
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
        //  store prefix products
        int prefix = 1;
        for(int i=0;i<n;i++){
            ans[i] = prefix;
            prefix *= nums[i];
        }
        // multiply suffix products
        int suffix = 1;//start with 1 
        for(int i=n-1;i>=0;i--){//reverse loop
            ans[i] *= suffix;//multiply directly in ans vector
            suffix *= nums[i];
        }
        return ans;//return and
    }
}; //time complexity o(n) 
//space complexity o(1)