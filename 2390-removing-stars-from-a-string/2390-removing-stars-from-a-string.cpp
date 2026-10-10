class Solution {
public:
    string removeStars(string s) {
        string a = "";
        
        int n = s.length();
        for(int i = 0; i <n; i++ ){
            if(s[i] == '*'){
                a.pop_back();
            }
            else{
                a.push_back(s[i]);
            }
        }
        return a;
    }
};