class Solution {
public:
    char repeatedCharacter(string s) {

        bool seen[26] = {};

        for (auto ch : s) {

            if (seen[ch - 'a']) {
                return ch;
            }

            seen[ch - 'a'] = true;
        }
        return ' ';
    }
    
};