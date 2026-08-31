class Solution {
public:
    double myPow(double x, int y) {
       int check=0;
       long long n=y;
       if(n==0 || x==1){return 1;}
       if(x==0){
        return 0;
       }
       if(n<0){
        check=1;
        n=-n;
       }
       double ans=1;
       while(n!=0){
        if(n%2==1){
            ans=ans*x;
            n-=1;
        }
        else{
            x*=x;
            n/=2;
        }

       }
       if(check==1){return 1/ans;}
       return ans;
    }
};