class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int product=1;
        if(nums.size() <3 || nums.size() >10000) return 0;
        for (int i : nums) if(i < -1000 || i>1000) return 0;
        sort(nums.begin(), nums.end());
       int n = nums.size();

        return max(
            nums[n - 1] * nums[n - 2] * nums[n - 3],
            nums[0] * nums[1] * nums[n - 1]
        );
        return product;
    }
};