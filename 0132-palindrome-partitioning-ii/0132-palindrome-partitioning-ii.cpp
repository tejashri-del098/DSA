class Solution {
public:
    bool isPalindrome(int i,int j ,string& s){
        while(i < j){
            if(s[i] != s[j]){
                return false;

            }
            i++;
            j--;
        }
        return true;
    }
    int solve(int n, string& s,int i , vector<int>& dp){
        if(i == n)return 0;
        
        if(dp[i] != -1)
             return dp[i];
        
            int minprt = 1e9;
        for(int j = i; j<n; j++){
            if(isPalindrome(i,j,s)){
                int curr = 1+solve(n,s,j+1,dp);
               
                minprt=min(minprt,curr);
            }
        }
        return dp[i]=minprt;
    }
    int minCut(string s) {
        int n = s.length();
        vector<int> dp(n+1,-1);
        return solve(n, s, 0, dp) - 1;
        
    }
};