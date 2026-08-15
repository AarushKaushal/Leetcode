class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0;
        int count = 0;
        map<int, int> prevSum;
        prevSum[0] = 1;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int rem = sum - k;
            if (prevSum.find(rem) != prevSum.end()) {
                count += prevSum[rem];
            }
            prevSum[sum]++;
        }
        return count;
    }
};