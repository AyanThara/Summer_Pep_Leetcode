class Solution {
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
};