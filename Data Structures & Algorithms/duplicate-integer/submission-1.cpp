class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
            //agar kisi number ka count 1 se jyada hai to duplicate hoga.
            if(mp[x]>1) return true;
        }
        return false;
    }
};