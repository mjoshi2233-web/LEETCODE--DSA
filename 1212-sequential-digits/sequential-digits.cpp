class Solution {
public:
        void check( int x ,int low ,int high ,vector<int>& final){
            if(x>high){return;}
            if( x >=low ){
                final.push_back(x);}
                int rem=x%10;
                if(rem==9){return;}
                check(x*10+rem+1,low,high,final);
            
            
        }


    vector<int> sequentialDigits(int low, int high) {
        int n=1;
        vector<int> final;
        
        while(n<=9){
            check(n,low,high,final);
            n++;
        }

        sort(final.begin(),final.end());
        return final;


    }
};