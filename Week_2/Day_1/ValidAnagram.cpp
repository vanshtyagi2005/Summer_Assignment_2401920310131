class Solution {
public:
    bool isAnagram(string s, string t) {
        //problem link- https://leetcode.com/problems/valid-anagram/
        if(s.size()!=t.size()){
            return false;
        }
        else{
            vector<int> m1(26,0);
            vector<int> m2(26,0);
            for(int i=0;i<s.size();i++){
                m1[s[i]-'a']++;
                m2[t[i]-'a']++;
            }
            for(int i=0;i<m1.size();i++){
                if(m1[i]!=m2[i]){
                    return false;
                }
            }
        }
    return true;
    }
};