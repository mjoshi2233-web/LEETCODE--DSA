class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int score) {
        sort(tokens.begin(),tokens.end());
        int ans=0,final=0;
        int start=0,end=tokens.size()-1;
        while(start<=end){
          if(score>=tokens[start]){
            ans++;
            final=max(final,ans);
            score-=tokens[start];
            start++;
          }
          else{
            if(ans>0){ 
            score+=tokens[end];
            ans--;
        
            end--;}
            else{break;}
            
          }

        }
        return final;
    }
};