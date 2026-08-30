class Solution {
public:
    int numberOfSubstrings(string s) {

        vector<int> lastseen(3, -1);
        int count = 0;
        int n = s.length();

        for (int i = 0; i < n; i++) {

            lastseen[s[i] - 'a'] = i;

            int min_index = min({lastseen[0], lastseen[1], lastseen[2]});
            count += min_index + 1;
        }

        return count;
    }
};