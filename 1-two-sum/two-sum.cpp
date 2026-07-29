class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i < nums.size()-1;i++){
            for(int j=i+1; j < nums.size();j++){
                if(nums[j] < -1E9 || nums[j] > 1E9) return {};
                if((nums[i] +nums[j]) == target) return {i,j};
            }
        }
        return {};
    }
};