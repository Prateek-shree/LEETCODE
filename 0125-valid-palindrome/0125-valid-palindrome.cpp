class Solution {
public:
    bool ispal(string& str, int l, int r) {
        while (l < r) {
            if (str[l] != str[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    bool isPalindrome(string s) {

        string ans = "";
        for (char ch : s) {
            if (isalnum(ch)) {
                ans += tolower(ch);
            }
        }
        return ispal(ans, 0, ans.size() - 1);
    }
};