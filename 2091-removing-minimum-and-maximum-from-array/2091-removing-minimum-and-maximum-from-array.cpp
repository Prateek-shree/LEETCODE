class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        int n = nums.size();
        int min_ele_index = min_element(begin(nums), end(nums)) - begin(nums);
        int max_ele_index = max_element(begin(nums), end(nums)) - begin(nums);

        int left = min(min_ele_index, max_ele_index);
        int right = max(min_ele_index, max_ele_index);

        return min({left + 1 + n - right, right + 1, n - left});
    }
};