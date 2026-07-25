class Solution {
public:
    int maxProduct(int n) {
        int max1=0;
        int max2=0;
        while(n!=0){
            int number=n%10;
            if( number>=max1){
                max2=max1;
                max1=number;
                
            }
            else if( number >=max2){
                max2=number;
            }n/=10;

        }return max1*max2;
        
    }
};