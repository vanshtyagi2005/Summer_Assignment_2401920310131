class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //Problem Link- https://leetcode.com/problems/longest-common-prefix/
        string mn=*min_element(strs.begin(),strs.end()),s=mn;
        for(int i=0;i<strs.size();i++){
            string rep="";
            for(int j=0;j<mn.size();j++){
                if(strs[i][j]==mn[j]){
                    rep+=mn[j];
                }
                else break;
            }
            if(rep.size()<s.size()){
                s=rep;
            }
        }
        return s;    
    }
};