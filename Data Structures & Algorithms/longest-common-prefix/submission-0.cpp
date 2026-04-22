class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string output = "";
        int n = strs[0].length();
        
        for(int i = 0; i < n; i++){
            for(string s : strs){
                if(i == n || s[i] != strs[0][i]){
                    return output;
                }   
            }
            output += strs[0][i];
        }
        return output;
    }
};