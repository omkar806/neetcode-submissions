class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for (int i ; i < nums.size() ; i++){
            if (mp.find(target-nums[i]) != mp.end()){
                if (i<mp[target-nums[i]]) {return {i,mp[target-nums[i]]};}
                else {return {mp[target-nums[i]],i};}
            }
            mp[nums[i]]= i ;

        }
        return {-1,-1};
    }
};
