class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini = *min_element(nums.begin(), nums.end());//find the minimum value using inbuild stl library 
        int maxi = *max_element(nums.begin(), nums.end());
        //find the maximum value using inbuild stl library 
        while (mini != 0) {//while minimum is not equal to 0 
            int temp = mini;//store mini in temp
            mini = maxi % mini;//minimum = maximum percentile minimum
            maxi = temp;//store temp in maximum
        }
        return maxi;//return maximum
    }
};