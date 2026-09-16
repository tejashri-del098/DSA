class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
       
        unordered_map<char,int>mp;
        for(char c : tasks){
            mp[c]++;
        }
        int maxfreq = 0;

       for(auto it : mp) {
         maxfreq = max(maxfreq, it.second);
        }
        int countmax = 0;
        for(auto it : mp){
            if(it.second == maxfreq){
                countmax++;
            }
        }

        int ans = (maxfreq-1)*(n+1)+countmax;
        return max((int)tasks.size(), ans);
    }
};