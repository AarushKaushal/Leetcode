class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        unordered_set<int> seq;
        int longest=1;
        for(int i=0;i<n;i++)seq.emplace(nums[i]);
        for(auto it : seq) {
            //we are staring from 1st element of seq, not from middle
            if(seq.find(it - 1) == seq.end()) {
                int cnt = 1;
                int x = it;

                while(seq.find(x + 1) != seq.end()) {
                    x = x + 1;
                    cnt = cnt + 1;
                }

                longest = max(longest, cnt);
            }
        }
    return longest;
    }
};