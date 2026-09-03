class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int count = 0;
        int el;

        for (int i = 0; i < nums.size(); i++) {

            if (count == 0) {
                el = nums[i];
                count = 1;
            } else if (el == nums[i]) {
                count++;
            } else {
                count--;
            }
        }

        return el;

        // int c = 0;
        // for (int i = 0; i < nums.size(); i++) {
        //     if (nums[i] == el) {
        //         c++;
        //     }
        // }

        // if (c > (nums.size() / 2))
        //     return el;
    }
};