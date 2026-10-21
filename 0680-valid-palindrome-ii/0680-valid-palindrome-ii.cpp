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

    bool validPalindrome(string s) {
        int l = 0;
        int r = s.length() - 1;
        while (l < r) {
            if (s[l] != s[r]) {
                return ispal(s, l + 1, r) || ispal(s, l, r - 1);
            }
            l++;
            r--;
        }
        return true;
    }
};