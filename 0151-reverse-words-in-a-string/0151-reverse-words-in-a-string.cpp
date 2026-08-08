class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = "";
        reverse(s.begin(), s.end());// Reverse the complete string
        for (int i = 0; i < n; i++) { // Pick one word at a time
            string word = "";
            while (i < n && s[i] != ' ') { // Collect characters of the current word
                word += s[i];
                i++;
            }
            reverse(word.begin(), word.end());// Reverse the individual word
            if (word.length() > 0) { // Add word to answer
                ans += " " + word;
            }
        } return ans.substr(1); // Remove the extra space at the beginning
    }
};