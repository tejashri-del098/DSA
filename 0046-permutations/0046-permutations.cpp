/*class Solution {
public:
   void solve(int idx,vector<int>& nums, vector<int>& temp, vector<int>&ans){
    if(idx == nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i = idx; i< nums.size(); i++){
        swap(nums[i],nums[idx]);
  
        solve(idx+1,nums,temp,ans);
        
        swap(nums[i],nums[idx]);

    }
   }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>>ans;
        solve(0,nums,temp,ans);
    }
};*/
class Solution{
    public:
     void solve(int idx,vector<int>& nums, vector<int>&temp, vector<vector<int>>& ans){
      if(idx == nums.size()){
        ans.push_back(temp);
        return;
      }
      for(int i = idx; i < nums.size(); i++){
        swap(nums[i],nums[idx]);
        temp.push_back(nums[idx]);
        solve(idx+1,nums,temp,ans);
        temp.pop_back();
         swap(nums[i],nums[idx]);

      }
     }
     vector<vector<int>> permute(vector<int>& nums) {
     vector<int>temp;
     vector<vector<int>>ans;
     solve(0,nums,temp,ans);
     return ans;
     }
};