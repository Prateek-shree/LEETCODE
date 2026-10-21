class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {

        int n = nums.size();
        vector<int> ans(n, -1);
        long long sum = 0;

        if (2 * k + 1 > n) {
            return ans;
        }

        for (int i = 0; i < (2 * k + 1); i++) {
            sum += nums[i];
        }

        for (int j = k; j < (n - k); j++) {
            ans[j] = sum / (2 * k + 1);
            if (j < n - k - 1) {
                sum = sum - nums[j - k] + nums[j + k + 1];
            }
        }

        return ans;
    }
};