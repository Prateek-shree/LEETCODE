class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int largest1 = 0, largest2 = 0;
        int smallest1 = INT_MAX, smallest2 = INT_MAX;

        for (int x : nums) {

            // Find two largest
            if (x > largest1) {
                largest2 = largest1;
                largest1 = x;
            }
            else if (x > largest2) {
                largest2 = x;
            }

            // Find two smallest
            if (x < smallest1) {
                smallest2 = smallest1;
                smallest1 = x;
            }
            else if (x < smallest2) {
                smallest2 = x;
            }
        }

        return largest1 * largest2 - smallest1 * smallest2;
    }
};