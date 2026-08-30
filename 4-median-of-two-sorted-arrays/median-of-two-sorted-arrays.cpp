class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int start=0;
        int end=0;
        while(start<nums1.size() && end <nums2.size()){
            if(nums1[start]<nums2[end]){
                ans.push_back(nums1[start]);
                start++;
            }
            else if( nums1[start]>nums2[end]){
                ans.push_back(nums2[end]);
                end++;
            }
            else{
                ans.push_back(nums1[start]);
                ans.push_back(nums2[end]);
                start++;end++;
            }
        }
        while(start<nums1.size()){
            ans.push_back(nums1[start]);start++;
        }
        while(end<nums2.size()){
            ans.push_back(nums2[end]);end++;
        }
        int n=ans.size();
        if(n%2==0){
            float f=ans[n/2];
            float s=ans[(n/2)-1];
            return (f+s)/2;
        }
        return ans[n/2];
        
    }
};