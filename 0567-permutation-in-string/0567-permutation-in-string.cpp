class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       int k = s1.size();
       int n = s2.size();
       if(k > n)return false;
       unordered_map<char,int>need,window;
       for(int i = 0; i < s1.size(); i++){
        need[s1[i]]++;
       }
       for(int i = 0; i < k; i++){
        window[s2[i]]++;
       }
       if(need == window)return true;
        
       for(int i = k; i < n; i++){
         window[s2[i]]++;

         char left = s2[i-k];
         window[left]--;

         if(window[left]== 0)
         window.erase(left);
         if(window == need)return true;
       }
       return false;
    }
};