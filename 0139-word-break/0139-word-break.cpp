class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>st (wordDict.begin(),wordDict.end());
        int n = s.length();
        vector<bool>dp(n+1,false);
        dp[0] = true;
        for(int i = 0; i < n; i++){
            for(int j = i ; j < n; j++){
                string word = s.substr(i, j-i+1);
                if(dp[i] && st.find(word) != st.end()){
                    dp[j+1]= true;
                }
            }
        }
        return dp[n];
    }
};