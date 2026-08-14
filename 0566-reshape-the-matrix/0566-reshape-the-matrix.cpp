class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {

        int row = mat.size();
        int col = mat[0].size();

        
        if (row * col != r * c) {
            return mat;
        }

        
        vector<int> demo;

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                demo.push_back(mat[i][j]);
            }
        }

        
        vector<vector<int>> ans(r, vector<int>(c));

        int index = 0;

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                ans[i][j] = demo[index];
                index++;
            }
        }

        return ans;
    }
};