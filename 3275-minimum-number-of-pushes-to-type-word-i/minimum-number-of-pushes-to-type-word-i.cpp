class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        int pushes=0;
        int c=1;
        while(n>0){
            int rem=min(n,8);
            pushes+=rem*c;
            n-=rem;
            c++;
               
        }return pushes;
    }
};