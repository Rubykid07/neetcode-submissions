
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        vector<int> char_count1(26);
        vector<int> char_count2(26);
        int n = s.length();
        for(int i = 0; i < n; i++){
            char_count1[s[i] - 'a']++;
            char_count2[t[i] - 'a']++;

        }
        for(int i = 0; i < 26; i ++){
            if(char_count1[i] != char_count2[i]) return false;
        }
        return true;
    }
};
