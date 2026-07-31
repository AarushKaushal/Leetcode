class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       unordered_map<int,int> mpp;
       mpp[0]=-1;
       int presum=0;
       int maxcnt=0;
       for(int i=0; i<nums.size();i++){
        if(nums[i] ==1) presum++;
        else presum --;
        if(mpp.find(presum) != mpp.end()) maxcnt=max(maxcnt, i-mpp[presum]);
        else mpp[presum]=i;
       }
    return maxcnt;
    }
};