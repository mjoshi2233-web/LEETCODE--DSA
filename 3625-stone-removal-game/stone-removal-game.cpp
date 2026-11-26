class Solution {
public:
    bool canAliceWin(int n) {
        int count=10;
       bool flag=true;
        while(n>=0){
            if(flag){
                if(n<count){
                    return false;
                }
            }
            else{
                if(n<count){
                    return true;
                }
            }
           n-=count;
           count--;
           flag=!flag;
        }
        if(flag){return  false;}
        else{
            return true;
        }
    }
};