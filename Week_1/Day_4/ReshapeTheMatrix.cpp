class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    //Problem link-https://leetcode.com/problems/reshape-the-matrix/submissions/2021977003/
    int r1=mat.size();
    int c1=mat[0].size();
    if(r1*c1!=r*c){
        return mat;
    }
    else{
        vector<vector<int>> final(r, vector<int>(c));
        vector <int> temp;
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                temp.push_back(mat[i][j]);
            }
        }
        int k=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                final[i][j]=temp[k];
                k++;
            }
        }
        return final;
    }
    }
};