class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.length();
        int n2 = s2.length();
        if(n1 > n2) return false;
        int freq[26] = {0};
        for(int i=0;i<n1;i++){
            freq[s1[i]-'a']++;
        }
        int windowFreq[26] = {0};
        for(int i=0;i<n2;i++){
            windowFreq[s2[i]-'a']++;
            if(i >= n1){
                windowFreq[s2[i-n1]-'a']--;
            }
            if(memcmp(freq, windowFreq, sizeof(freq)) == 0){
                return true;
            }
        }return false;
    }
};