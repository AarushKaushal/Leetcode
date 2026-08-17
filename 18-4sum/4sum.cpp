class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> ans;
        for(int i=0;i<n-3;i++){
                if(i >0 && nums[i] == nums[i-1]) continue;
                if ((long long)nums[i] + nums[i + 1] +nums[i + 2] + nums[i + 3] > target)break;
                for(int j=i+1; j<n-2;j++){
                if(j >i+1 && nums[j] == nums[j-1]) continue;
                if ((long long)nums[i] + nums[j] +nums[j + 1] + nums[j + 2] > target)break;
                if ((long long)nums[i] + nums[j] +nums[n - 1] + nums[n - 2] < target)continue;
                int start= j+1;
                int end= n-1;
                while(start < end){
                    long long sum = (long long)nums[i]+ nums[j]+nums[start]+nums[end];
                    if(sum==target){
                        ans.push_back({nums[i],nums[j],nums[start],nums[end]});
                        start ++;
                        end --;
                        while(start < end && nums[start] == nums[start-1]){
                            start ++;
                        }
                        while(start < end && nums[end] == nums[end+1]){
                            end --;
                        }
                    }else if(sum<target){
                        start++;
                    }else{ 
                        end --;
                    }
                }
            }
        }
        return ans;
    }
};