class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<char>> map(3,vector<char>(3,'N'));
        char turn='A';int count=0;
        
        for(auto x : moves){
            map[x[0]][x[1]]=turn;
            if(turn=='A'){turn ='B';}
            else{turn='A';}

            for(int i=0;i<3;i++){
               if(map[i][0]==map[i][1] && map[i][1]==map[i][2] && map[i][1]!='N'){
                return string(1,map[i][0]);
               }
            }
            
            for(int i=0;i<3;i++){
               if(map[0][i]==map[1][i] && map[1][i]==map[2][i] && map[1][i]!='N'){
                return string(1,map[0][i]);
               }
            }
            if(map[0][0]==map[1][1] && map[1][1]==map[2][2] && map[0][0]!='N'){
                return string(1,map[0][0]);
            }
            if(map[0][2]==map[1][1] && map[1][1]==map[2][0] && map[0][2]!='N'){return string(1,map[1][1]);
            


          
           }

        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(map[i][j]=='N'){return "Pending";}
            }
        }
        
        return "Draw";
        
        
    }
};