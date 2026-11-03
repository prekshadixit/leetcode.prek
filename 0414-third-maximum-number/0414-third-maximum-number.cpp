class Solution {
public:
    int thirdMax(vector<int>& nums) {

        long long first = LLONG_MIN;
        long long second = LLONG_MIN;
        long long third = LLONG_MIN;

        for (int num : nums) {

            // Skip duplicates
            if (num == first || num == second || num == third) {
                continue;
            }

            // Case 1: New largest
            if (num > first) {
                third = second;
                second = first;
                first = num;
            }

            // Case 2: New second largest
            else if (num > second) {
                third = second;
                second = num;
            }

            // Case 3: New third largest
            else if (num > third) {
                third = num;
            }
        }

        if (third == LLONG_MIN) {
            return first;
        }

        return third;
    }
};