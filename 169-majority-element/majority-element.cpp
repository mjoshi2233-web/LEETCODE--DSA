class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj=1;
        int el=nums[0];
        for( int i=1;i<nums.size();i++){
            if(maj==0){
                el=nums[i];
                
            }
            if(nums[i]==el){
                maj++;
            }
            else{maj--;}
            
           
        }
        return el;
    }
};