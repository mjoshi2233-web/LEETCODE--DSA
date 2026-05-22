class Solution {
public:
    int maxArea(vector<int>& height) {
        long long h,b,maxh=0,k;
        

        for (int i=0,j=height.size()-1;i<j;){
            k=j-i;
                    
                    h=min(height[i],height[j]);
                    maxh=max(maxh,h*k);
                    if(height[i]>height[j]){
                        j--;
                    }
                    else{ i++;}
                   
                    

            
        }return maxh;
        
    }
};