#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool isPalindrome(string s, int l, int r) {
        while (l <= r) {
            if (s[l++] != s[r--])
                return false;
        }
        return true;
    }

    void solve(int idx, vector<vector<string>>& ans, vector<string> curr,
               string s, int n) {
        if (idx == n) {
            ans.push_back(curr);
            return;
        }

        for (int i = idx; i < n; i++) {
            if (isPalindrome(s, idx, i)) {
                curr.push_back(s.substr(idx, i - idx + 1));
                solve(i + 1, ans, curr, s, n);
                curr.pop_back();
            }
        }
    }

public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> curr;
        int n = s.size();

        solve(0, ans, curr, s, n);
        return ans;
    }
};