class Solution {
public:
    int maxArea(vector<int>& height) {
        int volume=0;
        int left=0;
        int right=height.size()-1;
        while(left<right){
            volume = max(volume,min(height[left],height[right])*(right-left));
            if(height[right]>height[left])left++;
            else right --;
        }
        return volume;
    }
};