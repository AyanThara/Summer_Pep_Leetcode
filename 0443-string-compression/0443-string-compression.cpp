class Solution {
public:
    int compress(vector<char>& chars) {
        int index = 0;
        int n = chars.size();
        for(int i = 0; i < n; i++) {
            char ch = chars[i];
            int count = 0;
            while(i < n && chars[i] == ch) {
                count++;
                i++;
            }
            chars[index++] = ch;
            if(count > 1) {
                string str = to_string(count);
                for(char digit : str) {
                    chars[index++] = digit;
                }
            }
            i--; 
        } return index;
    }
};