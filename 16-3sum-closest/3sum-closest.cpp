class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans=INT_MAX;
        int f=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int summ=nums[i]+nums[j]+nums[k];
                if(abs(target-summ)<ans){
                    ans=abs(target-summ);
                    f=summ;

                }
                if(summ<target){j++;}
                else if(summ>target){k--;}
                else{break;}
            }
        }
  return f;
        
    }
};