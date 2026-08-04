class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mpp;
        for(char ch : s) mpp[ch]++;
        vector<pair<char,int>> v(mpp.begin(),mpp.end());
         for (int i = 0; i < v.size() - 1; i++) {
            for (int j = 0; j < v.size() - i - 1; j++) {
                if (v[j].second < v[j + 1].second) {
                    swap(v[j], v[j + 1]);
                }
            }
        }
        string ans = "";

        for (auto p : v) {
            while (p.second--) {
                ans += p.first;
            }
        }

        return ans;
    }
};