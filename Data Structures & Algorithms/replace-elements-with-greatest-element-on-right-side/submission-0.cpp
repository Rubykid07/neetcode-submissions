
class Solution {
public:
    int max_(int const n,int const m){
        if(n > m){
            return n;
        }else {
            return m;
        }
    }
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        for(int i = 0; i < n; i++){
            int maxnum = arr[i+1];
            for(int j = i+1; j < n; j++){
                maxnum = max_(maxnum, arr[j]);

            }
            arr[i] = maxnum;
        }
        arr[n - 1] = -1;
        return arr;
    }
};