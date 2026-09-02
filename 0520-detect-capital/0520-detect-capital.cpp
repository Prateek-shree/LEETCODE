class Solution {
public:
    bool detectCapitalUse(string word) {

        int c = 0;

        for (auto ch : word) {
            if (ch >= 'A' && ch <= 'Z') {
                c++;
            }
        }

        if (c == word.length())
            return true;

        if (c == 0)
            return true;

        if (c == 1 && word[0] >= 'A' && word[0] <= 'Z')
            return true;

        return false;
    }
};