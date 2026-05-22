class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& target) {
        unordered_set<int> a;
        for (int i=0;i<nums.size();i++){
            if (nums[i] != target[i]){
                a.insert(nums[i]);
            }
        }
        
        
        return a.size();}
    
};