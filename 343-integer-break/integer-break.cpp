class Solution {
public:
    int integerBreak(int n) {
        int prod=1;
        if(n==2)return 1;
        if(n==3)return 2;
        int num_3 = (int)n/3;
        int rem = n%3;
        if(rem==1){
            rem=4;
            num_3--;
        }else if(rem==0){
            rem=1;
        }
        return pow(3,num_3)*rem;
    }
};