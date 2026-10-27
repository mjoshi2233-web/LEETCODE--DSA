class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> grid;
        for(int j=0;j<m;j++){ 
            string str="";
        for(int i=0;i<n;i++){
            if(j==0){
                str+='.';
            }
            else if( i==n-1){
                str+='.';
            }
            else{
                str+='#';
            }

        }
        grid.push_back(str);}
        return grid;
    }
    
};