class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //priority_queue<Type, Container, Comparator> pq;
        priority_queue<int, vector<int>, less<int>> pq;
        for(int x: nums){
            pq.push(x);
        }
        while( k >1){
            pq.pop();
            k--;
        }
        return pq.top();
    }
};