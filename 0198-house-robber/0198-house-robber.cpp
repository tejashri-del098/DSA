class Solution {
public:
    vector<int>dp;
    int solve( vector<int>& nums,int i){
        if(i < 0)return 0;
        if(dp[i] != -1)return dp[i];

        int rob = nums[i] + solve(nums, i - 2);
        int skip = solve(nums,i-1);

        return dp[i]=max(rob,skip);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        dp.resize(n,-1);
        return solve(nums,n-1);
    }
};