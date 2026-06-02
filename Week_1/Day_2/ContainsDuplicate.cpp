class Solution {
public:
    bool containsDuplicate(vector<int>& nums) { 
        //problem link-https://leetcode.com/problems/contains-duplicate/
        unordered_map<int,int> mp;
        for(int x: nums){
            mp[x]++;
            if(mp[x]>1){
                return true;
            }
        }
        return false;
    }
};