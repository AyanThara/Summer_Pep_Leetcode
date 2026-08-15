class Solution {
public:
    void reverseString(vector<char>& s) { 
        reverse(s.begin(),s.end());  //using in built reverse function 
    }
};

/*class Solution {//simple two pointer approach 
public:
    void reverseString(vector<char>& s) {
        int start=0;//intilize it with 0 
        int end=s.size()-1;// initlize it with n-1 index
        while(start<end){//while start is less than end 
            swap(s[start],s[end]);//swap start and end 
            start++;//inrement start
            end--;//decrement end
        }
    }
};*/