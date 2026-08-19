class Solution {
public:
     bool check(vector<int> &nums,int k,int mid){
      int summ=0;int count=1;
      for(int i=0;i<nums.size();i++){
        if(nums[i]>mid){return false;}
        if(summ+nums[i]>mid){
            count++;
            summ=nums[i];
        }
        else{
            summ+=nums[i];
        }
        if(count>k){return false;}
      }


 return true;




     }
    int shipWithinDays(vector<int>& nums, int days) {
        int start=*min_element(nums.begin(),nums.end());
         int end=accumulate(nums.begin(),nums.end(),0);
        int ans=end;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(check(nums,days,mid)){
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