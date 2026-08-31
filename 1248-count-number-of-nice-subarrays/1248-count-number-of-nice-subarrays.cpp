class Solution {
private:
    
    int subarraysWithAtMostK(vector<int>& nums, int goal){
        if (goal < 0) return 0;

        int l = 0, r = 0, sum = 0, count = 0;
        int n = nums.size();

        while (r < n) {
            
            sum += (nums[r] % 2);

            
            while (sum > goal) {
                sum -= (nums[l] % 2);
                l++;
            }

            
            count += (r - l + 1);

            r++;
        }

        return count;
    }

public:
    int numberOfSubarrays(vector<int>& nums, int k){
        
        return subarraysWithAtMostK(nums, k) - subarraysWithAtMostK(nums, k - 1);
    }
};