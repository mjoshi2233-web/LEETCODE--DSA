class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int count=0;set <vector<int>> mp;
        for(int i=0;i<digits.size();i++){
            if(digits[i]==0){continue;}
            for(int j=0;j<digits.size();j++){
                if(j==i){continue;}
                for(int k=0;k<digits.size();k++){
                    if(k==j || k==i){continue;}
                    if(digits[k]%2==1){continue;}
                    if(mp.find({digits[i],digits[j],digits[k]})==mp.end()){
                        count++;
                    }
                    mp.insert({digits[i],digits[j],digits[k]});
                    

                }
            }
        }
        return count;

        
    }
};