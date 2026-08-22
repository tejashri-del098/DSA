/*class Solution {
public:
    bool checkDivisibility(int n) {
        int num = n;
        int sum = 0;
        int pro = 1;

        while (n > 0) {
            int digit = n % 10;
            sum = sum + digit;
            pro = pro * digit;
            n /= 10;
        }

        if (sum % num == 0 && pro % num == 0) {
            return true;
        }

        return false;
    }
};
*/
class Solution {
public:
    bool checkDivisibility(int n) {
        int num = n;
        int sum = 0;
        int pro = 1;

        while (n > 0) {
            int digit = n % 10;
            sum += digit;
            pro *= digit;
            n /= 10;
        }

        return num%(sum+pro)==0;
    }
};