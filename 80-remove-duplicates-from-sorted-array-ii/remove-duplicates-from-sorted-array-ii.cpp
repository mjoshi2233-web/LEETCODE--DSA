class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int start=1;int count=1;
        if(nums.size()==1 || nums.size()==2){return nums.size();}

        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                count=1;
            }
            else{count++;}
            if( count>2){
                continue;
            }
            else{nums[start]=nums[i];
            start++;

            }


        }return start;
        
    }
};