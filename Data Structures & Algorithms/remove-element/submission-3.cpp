class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> tmp;
        for(int n : nums){
            if(n != val){
                tmp.push_back(n);
            }
        }
        nums.clear();
        nums = tmp;
        return nums.size();
    }
};