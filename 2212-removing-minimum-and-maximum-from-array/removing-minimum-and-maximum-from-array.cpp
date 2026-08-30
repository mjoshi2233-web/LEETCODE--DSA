class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxelement=INT_MIN,minelement=INT_MAX;
        int maxx,minn;
        if(nums.size()==1){return 1;}
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxelement){
                maxelement=nums[i];
                maxx=i;
            }
            if(nums[i]<minelement){
                minelement=nums[i];
                minn=i;
            }
        }
        int n=nums.size();
        int first=n-min(maxx,minn);
        int second=max(maxx,minn)+1;
        int third;
        if(minn<maxx){
            third=(minn+1)+(n-maxx);
        }
        else{
             third=(maxx+1)+(n-minn);

        }

      return min(min(first,second),third);
        
    }
};