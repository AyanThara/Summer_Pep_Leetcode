/*class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;
        while (left < right) {
            while (left < right && !isalnum(s[left])) {  // Skip non-alphanumeric characters from left
                left++;
            }
            while (left < right && !isalnum(s[right])) {// Skip non-alphanumeric characters from right
                right--;
            }
            if (tolower(s[left]) != tolower(s[right])) {// Compare after convertingto lowercase
                return false;
            }
            left++;
            right--;
        }return true;
    }
};*/
class Solution {
public:
    bool isAlphaNum(char ch){
        if ((ch >= 'a' && ch <= 'z') ||(ch >= 'A' && ch <= 'Z') ||
            (ch >= '0' && ch <= '9')){
            return true;
        }return false;
    }
    bool isPalindrome(string s){
        int st = 0;
        int end = s.length() - 1;
        while (st < end){
            if (!isAlphaNum(s[st])){ // Skip invalid character from left
                st++;
                continue;   // Skip invalid character from right
            }if (!isAlphaNum(s[end])){
                end--;
                continue;
            }if (tolower(s[st]) != tolower(s[end])){ // Compare characters
                return false;
            }st++;// Move both pointers
            end--;
        }return true;
    }
};