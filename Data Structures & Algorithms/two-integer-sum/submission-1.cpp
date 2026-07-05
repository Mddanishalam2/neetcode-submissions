class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //TWO SUM PROBLEM
      unordered_map<int,int> mp;  //storing value and their index.
      for(int i=0;i<nums.size();i++){
        int comp=target-nums[i];
        //check if comp available then return comp's index and current value's index
        if(mp.find(comp)!=mp.end()){
            return{mp[comp],i};
        }
        //else store number in map so we can check further
        mp[nums[i]]=i;
      }
       return {};
    }
};
