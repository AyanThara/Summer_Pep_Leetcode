class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = "";//create a ans string 
        reverse(s.begin(), s.end());// Reverse the complete string
        for (int i = 0; i < n; i++) { // Pick one word at a time
            string word = "";//create a word string 
            while (i < n && s[i] != ' ') { // Collect characters of the current word
                word += s[i];//add index wise into the word string
                i++;
            }
            reverse(word.begin(), word.end());// Reverse the individual word
            if (word.length() > 0) { // Add word to answer
                ans += " " + word;//add to the ans string 
            }
        } return ans.substr(1); // Remove the first extra space at the beginning
    }
};