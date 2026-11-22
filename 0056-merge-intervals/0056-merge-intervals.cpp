
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        // Step 1: Sort intervals
        sort(intervals.begin(), intervals.end());

        // Step 2: Create answer vector
        vector<vector<int>> ans;

        // Step 3: Traverse all intervals
        for(int i = 0; i < intervals.size(); i++) {

            // Step 4: Check if new interval or no overlap
            if(ans.empty() || intervals[i][0] > ans.back()[1]) {

                ans.push_back(intervals[i]);

            }

            // Step 5: Merge overlapping intervals
            else {

                ans.back()[1] = max(ans.back()[1], intervals[i][1]);

            }
        }

        // Step 6: Return answer
        return ans;
    }
};
