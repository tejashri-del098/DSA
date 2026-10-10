class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        /*int n = nums.size();
        vector<int>arr(n);
        string ans = "";
        for(int i = 0; i < n; i++){
            arr.push_back(stoi(nums[i]));
        }
        sort(arr.begin(),arr.end(),greater<int>());
        
       ans = to_string(arr[k-1]);
        
       return ans;*/

       /*int n = nums.size();
       vector<long long>arr;
       for(int i = 0; i < n; i++){
        arr.push_back(stoll(nums[i]));
       }
       sort(arr.begin(),arr.end(),greater<long long>());
       return to_string(arr[k-1]);
       */

       sort(nums.begin(),nums.end(),[](string &a ,string &b){
        if(a.size() != b.size())
        return a.size() > b.size();
        return a > b;
       });
       return nums[k-1];

    }
};