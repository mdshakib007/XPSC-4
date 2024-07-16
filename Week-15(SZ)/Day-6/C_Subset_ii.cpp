#include <bits/stdc++.h>
using namespace std;

class Solution {
    void solve(vector<int>& nums, int idx, vector<int>& curr,
               vector<vector<int>>& ans) {
        int n = nums.size();
        ans.push_back(curr);

        for (int i = idx; i < n; i++) {
            if (i != idx && nums[i] == nums[i - 1])
                continue;

            curr.push_back(nums[i]);
            solve(nums, i + 1, curr, ans);
            curr.pop_back();
        }
        return;
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> curr;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        solve(nums, 0, curr, ans);
        return ans;
    }
};