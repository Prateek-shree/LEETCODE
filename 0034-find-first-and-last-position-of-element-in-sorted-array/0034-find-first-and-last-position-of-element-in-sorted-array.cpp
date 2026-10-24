class Solution {
public:
    int findbound(vector<int>& nums, int target, bool findfirst) {

        int low = 0;
        int high = nums.size() - 1;
        int result = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                result = mid;
                if (findfirst) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return result;
    }
    vector<int> searchRange(vector<int>& nums, int target) {

        int first = findbound(nums, target, true);
        int last = findbound(nums, target, false);
        vector<int> ans;
        ans.push_back(first);
        ans.push_back(last);

        return ans;
    }
};