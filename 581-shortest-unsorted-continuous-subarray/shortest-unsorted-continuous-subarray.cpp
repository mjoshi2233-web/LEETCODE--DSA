class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
      
        int start=INT_MAX,end=INT_MAX;
        int maxx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]<maxx){
                int temp=i-1;
                while( temp>=0 && nums[i]<nums[temp]){
                    temp--;
                }
                start=min(start,temp+1);
                
                end=i;}
            
            
           maxx=max(maxx,nums[i]);
        }
        if(start==INT_MAX){
            return 0;
        }
        return end-start+1;
    }
};