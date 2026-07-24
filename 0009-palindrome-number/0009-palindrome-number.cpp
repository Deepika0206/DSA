class Solution {
public:
    bool isPalindrome(int x) {
        int n =x;
        long long num=0;
        if(x<0) return false;
        while(x>0){
            int rem = x % 10;
            num = num*10+rem;
            x=x/10;
        }
        if(n==num) return true;
        else return false;
    }
};