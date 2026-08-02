class Solution {
public:
    int missingNumber(vector<int>& nums) {
    unordered_set<int> s(nums.begin(), nums.end());
    int i = 0;
    while (s.count(i))
        i++;
return i;
    }
};