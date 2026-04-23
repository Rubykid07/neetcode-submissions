class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int sz = nums.size();
        unordered_map<int, int> count;
        for(int n : nums){
            count[n]++;
            if(count[n] > sz/2){
                return n;
            }
        }
    }
};