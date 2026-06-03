class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //problem link-https://leetcode.com/problems/squares-of-a-sorted-array/description/
        int size=nums.size();
    vector <int> res(size);
    int i=0,j=size-1,k=size-1;
    while(i<=j){
        int a = nums[i] * nums[i];
        int b = nums[j] * nums[j];
        if(a>b){
            res[k]=a;
            i++;
        }
        else{
            res[k]=b;
            j--;
        }
        k--;
    }
    return res;
    }
};