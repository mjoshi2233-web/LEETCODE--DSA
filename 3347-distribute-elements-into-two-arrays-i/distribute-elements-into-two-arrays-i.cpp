class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector <int> num1;
        vector<int> num2;
        num1.push_back(nums[0]);
        num2.push_back(nums[1]);
        for(int i=2;i<nums.size();i++){
            if(num1.back()>num2.back()){
                num1.push_back(nums[i]);
            }
            else{
                num2.push_back(nums[i]);
            }

        }
        for(int i=0;i<num2.size();i++){
            num1.push_back(num2[i]);
        }
    return num1;
    }
};