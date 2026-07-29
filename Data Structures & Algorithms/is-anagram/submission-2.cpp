class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        string res ;
        if (s.size() > t.size()){
            res = s ;
        }
        else {
            res = t ;
        }
        for (auto it : s){
            mp1[it]++;
        }
        for (auto i : t){
            mp2[i]++;
        }

        for (auto r : res){
            if (mp1[r] != mp2[r]){
                return false;
            }
        }
    

        return true;
    }
};
