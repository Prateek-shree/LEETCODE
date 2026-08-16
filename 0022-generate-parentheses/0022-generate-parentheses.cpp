class Solution {
public:
    void solve(int n, int open, int close, string& curr,
               vector<string>& result) {

        if (curr.length() == 2 * n) {
            result.push_back(curr);
            return;
        }

        if (open < n) {
            curr.push_back('(');
            solve(n, open + 1, close, curr, result);
            curr.pop_back();
        }

        if (close < open) {
            curr.push_back(')');
            solve(n, open, close + 1, curr, result);
            curr.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string curr = "";

        solve(n, 0, 0, curr, result);

        return result;
    }
};