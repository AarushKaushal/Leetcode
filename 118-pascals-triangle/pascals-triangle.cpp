class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int j=1;j<=numRows;j++){
            int res=1;
            vector<int>temp;
            temp.push_back(res);
            for(int i=1;i<j;i++){
                res=res*(j-i);
                res=res/(i);
                temp.push_back(res);
            }
        ans.push_back(temp);
        }
        return ans;
    }
};