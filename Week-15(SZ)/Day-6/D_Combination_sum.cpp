#include <bits/stdc++.h>
using namespace std;

class Solution {
    void solve(vector<int>& arr, int idx, int sum, int target,
               vector<int>& curr, vector<vector<int>>& ans) {
        if (sum == target) {
            ans.push_back(curr);
            return;
        }

        if (sum > target || idx >= arr.size())
            return;

        curr.push_back(arr[idx]);
        solve(arr, idx, sum + arr[idx], target, curr, ans);
        curr.pop_back();
        solve(arr, idx + 1, sum, target, curr, ans);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;

        solve(candidates, 0, 0, target, curr, ans);
        return ans;
    }
};