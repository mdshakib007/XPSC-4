#include <bits/stdc++.h>
using namespace std;

class Solution {
    void solve(vector<int>& nums, vector<int>& curr, vector<vector<int>>& ans,
               vector<int>& freq) {
        if (nums.size() == curr.size()) {
            ans.push_back(curr);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (freq[i] == 0) {
                curr.push_back(nums[i]);
                freq[i] = 1;

                solve(nums, curr, ans, freq);
                curr.pop_back();
                freq[i] = 0;
            }
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr, freq(nums.size(), 0);

        solve(nums, curr, ans, freq);
        return ans;
    }
};
