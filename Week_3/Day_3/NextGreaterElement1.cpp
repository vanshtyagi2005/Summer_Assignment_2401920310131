class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        stack<int> st;
        for(int i = 0; i < nums2.size(); i++){
            int curr = nums2[i];
            while(!st.empty() && curr > st.top()){
                mp[st.top()] = curr;
                st.pop();
            }
            st.push(curr);
        }
        while(!st.empty()){
            mp[st.top()] = -1;
            st.pop();
        }
        vector<int> ans;
        for(int i = 0; i < nums1.size(); i++){
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};