class Solution {
public:
    bool isSubsequence(string s, string t) {
        if( t.empty()) return false;
        if(s.empty()) return true;
        int start = -1;
        int n = (int)s.length();
        bool valid = false;
        for(int i = 0; i < n; i++){
            valid = false;
            int m = (int)t.length();
            for(int j = start + 1; j < m; j++){
                if(t[j] == s[i]){
                    start = j;
                    valid = true;
                    break;
                }else if(j == m - 1 && t[j] != s[i]){
                    return false;
                }
            }
        }
        return valid;
    }
};