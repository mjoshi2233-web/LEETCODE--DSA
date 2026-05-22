/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {

     int start=1;
     int end=mountainArr.length()-2;
     int midpoint;
     while( start<=end){
         int mid=start+(end-start)/2;
         int el=mountainArr.get(mid);
         int prev=mountainArr.get(mid-1);
         int next=mountainArr.get(mid+1);
         if(el>prev && el>next){
            midpoint=mid;
            break;
         }
         else if( el>prev && el<next){
            start=mid+1;
         }
         else{
            end=mid-1;
         }
     }

      start=0;
      end=midpoint;
      int ans=-1;
      while(start<=end){
        int mid=start+(end-start)/2;
         int el=mountainArr.get(mid);
         if( el==target){
            ans=mid;
            end=mid-1;
         }
         else if(el<target){
            start=mid+1;

         }
         else{
            end=mid-1;
         }
      }
      if(ans!=-1){return ans;}

       start=midpoint+1;
      end=mountainArr.length()-1;
    
      while(start<=end){
        int mid=start+(end-start)/2;
         int el=mountainArr.get(mid);
         if( el==target){
            ans=mid;
            end=mid-1;
         }
         else if(el<target){
            end=mid-1;;

         }
         else{
            start=mid+1;;
         }
      }
      return ans;
       
     







        
    }
};