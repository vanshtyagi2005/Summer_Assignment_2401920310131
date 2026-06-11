class Solution {
public:
    string reverseWords(string s) {
        vector <int> spaces;
        int i=0;
        for(;i<s.size();i++){
            if(s[i]==' '){
                spaces.push_back(i);
            }
        }
        spaces.push_back(i);
        i=0;
        for(int k=0;k<spaces.size();k++){
            int j=spaces[k]-1;
            while(i<j){
                swap(s[i],s[j]);
                i++;j--;
            }
            i=spaces[k]+1;
        }
        return s;
    }
};