class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        //problem link- https://leetcode.com/problems/ransom-note/
        if(ransomNote.size()>magazine.size()){
            return false;
        }
        else{
            vector<int> m1(26,0);
            vector<int> m2(26,0);
            int i=0,j=0;
            while(i<ransomNote.size() && j<magazine.size()){
                m1[ransomNote[i++]-'a']++;
                m2[magazine[j++]-'a']++;
            }
            while(i<ransomNote.size()){
                m1[ransomNote[i++]-'a']++;
            }
            while(j<magazine.size()){
                m2[magazine[j++]-'a']++;
            }
            for(int i=0;i<m1.size();i++){
                if(m1[i]>m2[i]){
                    return false;
                }
            }
        }
        return true;
        }
};