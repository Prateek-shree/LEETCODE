class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        int top = 0, bottom = n - 1;
        int left = 0, right = n - 1;

        vector<vector<int>> ans(n, vector<int>(n, 0));
        int ele = 1;

        while (top <= bottom && left <= right) {

            // 1. Left to right
            for (int j = left; j <= right; j++) {
                ans[top][j] = ele;
                ele++;
            }
            top++;

            // 2. Top to bottom
            for (int i = top; i <= bottom; i++) {
                ans[i][right] = ele;
                ele++;
            }
            right--;

            // 3. Right to left
            if (top <= bottom) {
                for (int j = right; j >= left; j--) {
                    ans[bottom][j] = ele;
                    ele++;
                }
                bottom--;
            }

            // 4. Bottom to top
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    ans[i][left] = ele;
                    ele++;
                }
                left++;
            }
        }

        return ans;
    }
};