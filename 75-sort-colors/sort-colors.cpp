class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start=0;
        int second=nums.size()-1;
        int i=0;
        while(i<=second){
            if(nums[i]==0){swap(nums[i],nums[start]);start++;}
            else if(nums[i]==2){swap(nums[i],nums[second]);second--;i--;}
            i++;
        }
        return ;
        
    }
};