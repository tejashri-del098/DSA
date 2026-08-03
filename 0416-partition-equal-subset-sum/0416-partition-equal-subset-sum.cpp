class Solution {
public:
    int n;
    int t[201][10001];
    int solve(vector<int>& nums,int i ,int trg){
        if(trg == 0)return true;
        if(i == n)return false;
        bool take = false;
        if(t[i][trg] != -1)return t[i][trg];
        if(nums[i] <= trg){
          
          take = solve(nums, i + 1, trg - nums[i]);
        }
        bool skip = solve(nums,i+1,trg);

        return t[i][trg]=take || skip;
    }
    bool canPartition(vector<int>& nums) {
       n = nums.size();
       memset(t,-1,sizeof(t));
       int sum = accumulate(nums.begin(),nums.end(),0);
       if(sum % 2 != 0)
            return false;
       return solve(nums,0,sum/2); 
    }
};
