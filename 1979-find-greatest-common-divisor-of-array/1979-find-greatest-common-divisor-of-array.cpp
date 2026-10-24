
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int smallest = nums[0];
        int largest = nums[0];

        for (int num : nums) {
            if (num < smallest) {
                smallest = num;
            }

            if (num > largest) {
                largest = num;
            }
        }

     
        while (largest % smallest != 0) {
            int rem = largest % smallest;
            largest = smallest;
            smallest = rem;
        }

        return smallest;
    }
};
