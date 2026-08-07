class Solution {
public:
    bool checkk(int mid,vector<int> piles, int h){
        int count=0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]%mid==0){
                count+=piles[i]/mid;
            }
            else{
                count+=piles[i]/mid+1;
            }
            if(count>h){return false;}
        }
      return true;
      
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans=-1;
        int start=1;
        int end=*max_element(piles.begin(),piles.end());
        while(start<=end){
            int mid=start+(end-start)/2;
            if(checkk(mid,piles,h)){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }

        }
       
        return ans;
    }
};