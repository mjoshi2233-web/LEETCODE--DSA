class Solution {
public:
    int smallestNumber(int n, int t) {
   while(true){
    int ans=1;
    int temp=n;
    while(temp!=0){
        int rem=temp%10;
        temp/=10;
        ans*=rem;
    }
    if(ans%t==0){return n;}
    else{ n++;}
   }
return -1;
        
    }
};