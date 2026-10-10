class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i = num.size()-1;
        vector<int>ans;
        while(i >= 0 || k > 0){
            if(i >= 0){
                   k += num[i];
                i--;
            }
            ans.push_back(k%10);
            k/=10;
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};
/*
1. Mistake: s.push_back(to_string(num[i]))
Your code:
s.push_back(to_string(num[i]));


Why the error occurs: to_string(num[i]) returns a string, but push_back() on a string accepts only a single char.

2. Mistake: string ans = s + ks
This part is actually valid C++, but it concatenates strings instead of adding numbers.
For example:
s = "1200";
ks = "34";

string ans = s + ks;  // "120034", not "1234"
3. Mistake: stoi(ans)
stoi() converts a string to an int, but the resulting number might exceed the range of int. Also, this problem's constraints allow the sum to exceed standard integer limits.*/