class Solution {
public:
    int maxLength(vector<int>& nums) {
    int n = nums.size();
    int ans = 0;
    for(int i = 0; i < n; i++){
        long long product = 1;
        int g = nums[i];
        long long l = nums[i];
        for(int j = i; j< n; j++){
             product = product * nums[j];
              if (product > 25200)
                    break;

            g = __gcd(g,nums[j]);
            l = (l/__gcd(l,(long long)nums[j]))*nums[j];

            if(product == g*l){
                int len = j-i+1;
                ans = max(ans,len);
            }
        }
    }
    return ans;
    }
};