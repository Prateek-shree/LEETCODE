class Solution {
public:
    int maxDepth(string s) {

        int b = 0;
        int maxb = 0;

        for (auto ch : s) {
            if (ch == '(') {
                b++;

            } else if (ch == ')') {
                b--;
            }

            maxb = max(maxb, b);
        }

        return maxb;
    }
};