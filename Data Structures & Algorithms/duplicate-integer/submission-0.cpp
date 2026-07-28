class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp ;
        for(auto it : nums){
            mp[it]++;
        }
        for(auto i : mp){
            if (i.second > 1){
                return true;
            }
        }
        return false;
    }
};