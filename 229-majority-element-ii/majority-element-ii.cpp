class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=1;
        vector <int > ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]!=nums[i+1]){
                if(count>n/3){
                    ans.push_back(nums[i]);
                    count=1;
                }
                count=1;}
                else{count++;}
            

        }
        if (count>n/3){
            ans.push_back(nums[n-1]);}
            return ans;
        
    }
};