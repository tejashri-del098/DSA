class Solution {
public:
    bool backspaceCompare(string s, string t) {
        /*int n = s.length();
        int m = t.length();
        if(n != m)return false;
        for(int i = n-1; i >= 0; i--){
            if(s[i] = '#'){
                s.erase(i-1,1);
            }
        }
        for(int i = n-1; i >= 0; i--){
            if(t[i] = '#'){
                t.erase(i-1,1);
            }
        }
        if(s == t)return true;
        else
        return false;*/ //Its not worked your thinking incorrect , we get runtime error 
        string a = "";
        string b = "";

        for(char c : s){
            if(c == '#'){
                if(!a.empty()){
                    a.pop_back();
                }
            }else{
                a.push_back(c);
            }
        }
        for(char c : t){
            if(c == '#'){
                if(!b.empty()){
                    b.pop_back();
                }
            }else{
                b.push_back(c);
            }
        }
        return a== b;

    }
};