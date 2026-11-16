class Solution {
public:
    string digitSum(string s, int k) {
        string y=s;
        while(s.length()>k){
            string temp="";
            int count=0;
            int summ=0;
            for(int i=0;i<s.length();i++){
                 
                summ+=(int)(s[i]-'0');

                count++;
                 if(count==k){
                    temp+=to_string(summ);
                    summ=0;
                    count=0;
                }
              

            }
       if(s.length()%k!=0) {temp+=to_string(summ);}
            
                s=temp;
        }
        return s;
    }
};