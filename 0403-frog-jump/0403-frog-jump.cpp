class Solution {
public:
    int n;
    int t [2001][2001];
    unordered_map<int,int>mp;
    bool solve(int prevjmp ,int curridx,vector<int>& stones){
        if(curridx == n-1)return true;
        bool res = false;
        if(t[prevjmp][curridx] != -1)return t[prevjmp][curridx];
        for(int jmp = prevjmp -1; jmp <= prevjmp+1; jmp++ ){
            if(jmp > 0){
            int curr = stones[curridx]+jmp;
            if(mp.find(curr) != mp.end()){
            res = res || solve(jmp, mp[curr], stones);
            }
        }
        
        }
        return t[prevjmp][curridx]=res;

    }
    bool canCross(vector<int>& stones) {
        n = stones.size();
        if(stones[1] != 1)return false;
        for(int i = 0; i < n; i++){
            mp[stones[i]] = i;
        }
        memset(t,-1,sizeof(t));
        return solve(0,0,stones);
    }
};