class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minn=INT_MAX;
         int isodd=0;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]<minn){
                minn=nums1[i];
            }
            if(nums1[i]%2==1){
                isodd=1;
            }
        }
        if(minn%2==0 && isodd){
            return false;
        }
        return true;
        
    }
};