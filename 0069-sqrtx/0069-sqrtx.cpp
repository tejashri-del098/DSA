class Solution {
public:
    int mySqrt(int x) {
       /*long long n = 1;
       if(x == 0)return 0;
       while(n*n <= x){
        n++;
       } 
       return n-1;*/

       int left = 0;
       int right = x;

       while(left <= right){
        int mid = left +(right-left)/2;
        if(1ll*mid*mid == x){
            return mid;

        }else if(1ll*mid*mid < x){
            left = mid+1;
        }else{
            right = mid-1;
        }
       }
       return right;
    }
};