class Solution {
public:
    bool isHappy(int n) {
        set <int> mp;
        int ans=0;
        while(n!=1){ 
       while(n!=0){
        int rem=n%10;
        n/=10;
        ans=ans+rem*rem;

       }
       if(mp.find(ans)!=mp.end()){return false;}
       mp.insert(ans);
       n=ans;
       ans=0;
       }
        return true;
        
    }
};