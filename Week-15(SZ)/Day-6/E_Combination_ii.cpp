#include <bits/stdc++.h>
using namespace std;

class Solution {
    void solve(vector<int>& arr, int idx, int sum, int target, vector<int>&curr, vector<vector<int>>& ans){
        if(sum == target){
            ans.push_back(curr);
            return;
        }
        if(idx >= arr.size() || sum > target) return;

        for(int i = idx;i<arr.size(); i++){
            if(i > idx && arr[i] == arr[i-1]) continue;

            curr.push_back(arr[i]);
            solve(arr, i+1, sum, target-arr[i], curr, ans);
            curr.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        sort(candidates.begin(), candidates.end());

        solve(candidates, 0, 0, target, curr, ans);
        return ans;
    }
};