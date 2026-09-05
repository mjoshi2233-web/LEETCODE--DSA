class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
      int n=nums.size();
      if(n<4){return {};}
      set <vector<int>> s;
      sort(nums.begin(),nums.end());
      for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            int start=j+1,end=n-1;
            
            while(start<end){
                long long summ=nums[i]+nums[j];
                summ+=nums[start];
                summ+=nums[end];
                if(summ==target){
                    s.insert({nums[i],nums[j],nums[start],nums[end]});
                }
                if(summ<target){start++;}
                else{
                    end--;
                }

            }
        }
      }
      return {s.begin(),s.end()};
    }
};