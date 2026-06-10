class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0;
        int j=needle.size();
        while(i<haystack.size()){
            bool a=true;
            if(haystack[i]==needle[0]){
                int x=0;
                while(x<j){
                    if(haystack[x+i]!=needle[x]){
                        a=false;
                        break;
                    }
                    x++;
                }
            if (a==true){
                return i;
            }
            }
            i++;
        
        }
        return -1;
    }
};