class Solution {
public:
    bool sumGame(string num) {
        int ls = 0, rs = 0;
        int lq = 0, rq = 0;
        int n = num.length();
        for (int i = 0; i < n / 2; i++) {
            if (num[i] == '?')
                lq++;
            else
                ls += num[i] - '0';
        }
        for (int i = n / 2; i < n; i++) {
            if (num[i] == '?')
                rq++;
            else
                rs += num[i] - '0';
        }
        if (lq + rq == 0)
            return ls != rs;
        
        if ((lq + rq) % 2 != 0)
            return true;

        int minsub = min(lq, rq);
        lq -= minsub;
        rq -= minsub;

        if (lq > 0) {
            if (ls > rs)
                return true;

            if (9 * (lq / 2) == rs - ls)
                return false;

            return true;
        }

        if (rq > 0) {
            if (rs > ls)
                return true;

            if (9 * (rq / 2) == ls - rs)
                return false;

            return true;
        }

        return ls != rs;
    }
};