class Solution {
public:
    string countAndSay(int n) {
        if( n==1){return "1";}
        int k=2;
        string str="1";
        while( k<=n){ 
            string temp="";
        for( int i=0;i< str.size(); ){
            char ch=str[i];
             
            int count=0;
            while( i< str.size() && str[i]==ch){
                count++;i++;
            }
         string dig=to_string(count);
         temp+=dig;
         temp+=ch;}
         str=temp;
          k++;  
         }return str;
    }
};