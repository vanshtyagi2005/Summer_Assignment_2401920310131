class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int r=matrix.size();
    int c=matrix[0].size();
    int top=0, bottom=r-1,left=0,right=c-1;
    vector<int> final ;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            final.push_back(matrix[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            final.push_back(matrix[i][right]);
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                final.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                final.push_back(matrix[i][left]);
            }
            left++;
        }       
    }
    return final;
    }
};