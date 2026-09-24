class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int count=0;
            int num=nums[i];
            while(num!=0){
                int rem=num%10;
                num/=10;
                count+=rem;
            }
            if(count==i){return i;}
        }
        return -1;
    }
};