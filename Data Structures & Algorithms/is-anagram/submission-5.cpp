
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        vector<int> char_count(26);
        int n = s.length();
        for(int i = 0; i < n; i++){
            char_count[s[i] - 'a']++;
            char_count[t[i] - 'a']--;

        }
        for(int i = 0; i < char_count.size(); i ++){
            if(char_count[i] != 0) return false;
        }
        return true;
    }
};
