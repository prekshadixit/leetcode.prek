
class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int n = nums.size();

        // STEP 1: Find breakpoint
        int i = n - 2;

        while(i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }

        // STEP 2: Find next greater element
        if(i >= 0) {

            int j = n - 1;

            while(nums[j] <= nums[i]) {
                j--;
            }

            swap(nums[i], nums[j]);
        }

        // STEP 3: Reverse the right side
        reverse(nums.begin() + i + 1, nums.end());
    }
};
