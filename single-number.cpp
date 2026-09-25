class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int uniq = 0;
        for(int val : nums){
            uniq ^= val;
        }
        
        return uniq;
    }
};
