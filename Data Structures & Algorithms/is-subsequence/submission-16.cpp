class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0;
        int n = (int)t.size();
        int m = (int)s.size();
        for(int i = 0; i < n; i++){
            if(t[i] == s[j]){
                j++;
            }
        }
        return j == (int)s.length() ;
    }
};