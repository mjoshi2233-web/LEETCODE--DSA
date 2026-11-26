class Solution {
public:
    bool canAliceWin(int n) {
        int count=10;
        bool flag=true;
        while(n>0){
            if(n<count){break;}
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