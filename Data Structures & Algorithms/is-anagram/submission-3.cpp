class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp1;
        if (s.size() != t.size()){
            return false;
        }
        for (auto it : s){
            mp1[it]++;
        }
        for (auto i : t){
            mp1[i]--;
        }
        for(auto j : mp1){
            if (j.second>0){
                return false;
            }
        }

    return true;

    }
};
