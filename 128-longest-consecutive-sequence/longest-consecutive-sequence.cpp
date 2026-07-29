class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map <int,int> mp;
        for( int i=0;i<nums.size();i++){
              mp[nums[i]]=1;
        }int last=INT_MIN;
         int count=0;
         int longest=0;
        for(auto i : mp){
             if(i.first-1==last){
                count++;
                last=i.first;
             }
             else if( i.first!=last){
                last=i.first;
                count=1;
             }
             longest=max(count,longest);
        }
        return longest;
    }
};