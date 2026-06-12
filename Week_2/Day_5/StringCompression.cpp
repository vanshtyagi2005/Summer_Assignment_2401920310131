class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int index = 0;
        while(i < chars.size()) {
            char current = chars[i];
            int count = 0;
            while(i < chars.size() && chars[i] == current) {
                count++;
                i++;
            }
            chars[index++] = current;
            if(count > 1) {
                string freq = to_string(count);
                for(char c : freq) {
                    chars[index++] = c;
                }
            }
        }
        return index;
    }
};