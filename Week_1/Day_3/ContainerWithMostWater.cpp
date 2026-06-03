class Solution {
public:
    int maxArea(vector<int>& height) {
        //problem link-https://leetcode.com/problems/container-with-most-water/
    int size=nums.size();
    int max=0;
    int i=0,j=size-1;
    while(i<=j){
        int width=j-i;
        if(nums[i]>nums[j]){
            int area=width*nums[j];
            if (area>max) max=area;
            j--;
        }
        else{
            int area=nums[i]*width;
            if (area>max) max=area;
            i++;
        }
    }
    return max;
    }
};