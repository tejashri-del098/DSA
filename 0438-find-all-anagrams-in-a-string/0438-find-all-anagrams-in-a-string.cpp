class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
      int n = s.length();
      int m = p.length();
      
      vector<int>ans;
      if (n < m)
      return ans;

      unordered_map<char,int> mp;
      unordered_map<char,int>window;
      for(char ch : p){
        mp[ch]++;
      }
     
     for (int i = 0; i < m; i++) {
            window[s[i]]++;
        }
        if(window == mp)
        ans.push_back(0);
        for (int j = m; j < n; j++) {
         window[s[j]]++;
        
        window[s[j-m]]--;
        if(window[s[j-m]]==0)
        window.erase(s[j-m]);

        if (window == mp)
             ans.push_back(j - m + 1);
        }
      return ans;

       
    }
};