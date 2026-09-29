class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> small;
        vector<int> equal;
        vector<int> greater;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){small.push_back(nums[i]);}
            else if(nums[i]==pivot){equal.push_back(nums[i]);}
            else{greater.push_back(nums[i]);}
        }
        small.insert(small.end(),equal.begin(),equal.end());
        small.insert(small.end(),greater.begin(),greater.end());
        return small;
        
    }
};