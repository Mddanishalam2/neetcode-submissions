class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else{
            maxcount=max(count,maxcount);
            count=0;
            }
        }
        //jab input me last ke saare 1 hi rahenge tab ye else condition nhi chalega to 
        //hamara count update nhi hoga isiliye last me bhi ise update krte hai.
        maxcount=max(count,maxcount);
        return maxcount;
    }
};