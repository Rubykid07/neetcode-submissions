class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int rep;
        for(int i = 0; i < nums.size() ; i++){
            rep = nums[i];
            for(int j = 0; j < i ; j++){
                if(nums[j] == rep){
                    return true;
                }
            }        
        }
        return false;
    }
};