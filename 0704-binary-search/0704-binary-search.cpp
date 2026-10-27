
class Solution {
public:
    int binarySearch(vector<int>& nums, int target,
                     int low, int high) {

        // Base case: target nahi mila
        if (low > high) {
            return -1;
        }

        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            return mid;
        }

        // Left half mein search
        if (target < nums[mid]) {
            return binarySearch(nums, target, low, mid - 1);
        }

        // Right half mein search
        return binarySearch(nums, target, mid + 1, high);
    }

    int search(vector<int>& nums, int target) {
        return binarySearch(nums, target, 0, nums.size() - 1);
    }
};
