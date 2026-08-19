class Solution {
public:
    bool check(int mid,vector<int> &nums,int n){
        int  summ=0;
        int count=0;
        int i=0;
        while(i<nums.size()){
            if(nums[i]<=mid){count++;i++;}
             else if(nums[i]>mid){ 
               int rem=nums[i]%mid;
              count+=(nums[i]/mid);
              if(rem!=0){count++;}
              i++;
            }
            if(count>n){return false;}
        }
        return true;
    }
    int minimizedMaximum(int n, vector<int>& nums) {
        int start=1;
        int end=*max_element(nums.begin(),nums.end());
        int ans=INT_MAX;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(check(mid,nums,n)){
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