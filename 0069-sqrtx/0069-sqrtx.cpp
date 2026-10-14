class Solution {
public:
    int mySqrt(int x) {
       long long n = 1;
       if(x == 0)return 0;
       while(n*n <= x){
        n++;
       } 
       return n-1;
    }
};