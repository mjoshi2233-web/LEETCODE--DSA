class Solution {
public:
    bool checkDivisibility(int n) {
        int summ=0,pro=1;int temp=n;
        while(n!=0){
            int rem=n%10;
            n/=10;
            summ+=rem;pro*=rem;
        }
        return temp%(summ+pro)==0;
    }
};