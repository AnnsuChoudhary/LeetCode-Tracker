class Solution {
public:
    bool solve(string &s, int i, string need) {
        // BC
        if(i == s.size()) {
            return need.empty();
        }

        char ch = s[i];
        if(ch == '(') {
            return solve(s, i + 1, need + ')');
        }
        else if(ch == '{') {
            return solve(s, i + 1, need + '}');
        }
        else if(ch == '[') {
            return solve(s, i + 1, need + ']');
        }
        else {
            if(need.empty() || ch != need.back())
                return false;

            return solve(s, i + 1, need.substr(0, need.size() - 1));
        }
    }

    bool isValid(string s) {
        return solve(s, 0, "");
    }
};