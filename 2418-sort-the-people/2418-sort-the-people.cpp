/*class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string, greater<int>> mp;

        for (int i = 0; i < names.size(); i++) {
            mp[heights[i]] = names[i];
        }

        vector<string> ans;

        for (auto &p : mp) {
            ans.push_back(p.second);
        }

        return ans;
    }
};*/
class Solution{
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
      int n = names.size();
      vector<pair<int,string>>v;
      for(int i = 0; i < n; i++){
        v.push_back({heights[i],names[i]});
      }
      
      sort(v.begin(), v.end(), [](auto &a, auto &b) {
        return a.first > b.first;
      });
      vector<string>ans;
      
      for (auto &p : v) {
        ans.push_back(p.second);
      }
      return ans;
      
    }
    

};