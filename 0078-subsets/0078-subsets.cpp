
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> current;

    void solve(vector<int>& nums, int index) {

        // Base case: all elements have been considered
        if (index == nums.size()) {
            ans.push_back(current);
            return;
        }

        // Choice 1: Pick the current element
        current.push_back(nums[index]);
        solve(nums, index + 1);

        // Backtrack: undo the pick
        current.pop_back();

        // Choice 2: Do not pick the current element
        solve(nums, index + 1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        solve(nums, 0);
        return ans;
    }
};
