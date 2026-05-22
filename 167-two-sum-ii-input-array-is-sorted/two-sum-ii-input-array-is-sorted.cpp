class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size(),start,end,mid;
        for ( int i=0;i<n-1;i++){
            start=i+1;
            end=n-1;
            while(start<=end){   
            mid=start+(end-start)/2;
            if( numbers[i]+numbers[mid]== target){
                return {i+1,mid+1};
            }
            else if ( numbers[i]+numbers[mid]< target){
                start=mid+1;
            }
            else{ end=mid-1;}


        

        }
        
        }return {};}
};