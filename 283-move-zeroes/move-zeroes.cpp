class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        // if(n <1 || n> 1E4) return;
        // for(int i : nums){
        //     if(i < -2E31 || i> (2E31-1)) return;
        // }
        int count=0;
        for(int i=0; i<n;i++){
            if(nums[i] !=0){
                ans.push_back(nums[i]);
                count ++;
            }
        }
        while(count < n){
            ans.push_back(0);
            count ++;
        }
        for(int i=0; i<n;i++) nums[i]=ans[i];
    }
};