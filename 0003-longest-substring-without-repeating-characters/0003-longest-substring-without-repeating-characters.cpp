class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<char> st;
        int ans=0, ret = 0;
        int n = s.size();
        int l = 0;

        for(int i=0; i<n; i++){

            if(st.count(s[i])){
                while(st.count(s[i])){
                    st.erase(s[l]);
                    l++;
                    ret--;
                }

            }
            
            st.insert(s[i]);
            ret += 1;
            

            ans = max(ans, ret);
        }

        return ans;
        
    }
};