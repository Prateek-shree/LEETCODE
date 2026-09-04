class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        int minel = INT_MAX;
        int n = nums.size();
        vector<int> minElIndex(n);

        for (int i = n - 1; i >= 0; i--) {
            minel = min(minel, nums[i]);
            minElIndex[i] = minel;
        }

        int maxEl = INT_MIN;
        for (int i = 0; i < n; i++) {

            maxEl = max(maxEl, nums[i]);
            int minEl = minElIndex[i];

            if (maxEl - minEl <= k) {
                return i;
            }
        }

        return -1;
    }
};