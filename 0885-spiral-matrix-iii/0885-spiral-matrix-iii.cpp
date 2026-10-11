class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols,
                                        int rStart, int cStart) {
        vector<vector<int>> ans;
        int r = rStart, c = cStart;

        // East, South, West, North
        int dr[] = {0, 1, 0, -1};
        int dc[] = {1, 0, -1, 0};

        int len = 1;
        int dir = 0;

        ans.push_back({r, c});

        while (ans.size() < rows * cols) {

            for (int repeat = 0; repeat < 2; repeat++) {

                for (int step = 0; step < len; step++) {
                    r += dr[dir];
                    c += dc[dir];

                    if (r >= 0 && r < rows &&
                        c >= 0 && c < cols) {
                        ans.push_back({r, c});
                    }
                }

                dir = (dir + 1) % 4;
            }

            len++;
        }

        return ans;
    }
};