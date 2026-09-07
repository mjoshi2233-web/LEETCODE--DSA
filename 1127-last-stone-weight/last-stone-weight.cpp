class Solution {
public:
    int lastStoneWeight(vector<int>& nums) {
        while(1){
            if(nums.size()==0){return 0;}
            if(nums.size()==1){return nums[0];}
            sort(nums.begin(),nums.end());
            int first=nums[nums.size()-1];
            int second=nums[nums.size()-2];
            nums.pop_back();nums.pop_back();
            if(first-second>0){nums.push_back(first-second);}

        }
        return 0;
    }
};