class Solution {
public:
    unordered_map<int, vector<string>> dp;

    vector<string> solve(int n) {
        if(dp.count(n)) return dp[n];

        vector<string> res;

        // bc
        if(n == 0) {
            res.push_back("");
            return dp[n] = res;
        }

        for(int i = 0; i < n; i++) {
            vector<string> left = solve(i);
            vector<string> right = solve(n - i - 1);

            for(auto &l : left) {
                for(auto &r : right) {
                    res.push_back("(" + l + ")" + r);
                }
            }
        }

        return dp[n] = res;
    }

    vector<string> generateParenthesis(int n) {
        return solve(n);
    }
};