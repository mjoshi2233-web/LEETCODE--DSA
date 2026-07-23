class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int total=0;
        for ( int i=0;i<nums.size();i++){
            int count=0;
            int summ=0;
          for( int j=1;j*j<=nums[i];j++){
            
            if(nums[i]%j==0){
                count++;
                summ+=j;
            
            if(nums[i]/j!=j){
                count++;
                summ+=nums[i]/j;
            }
            if(count>4){break;}
          }}
          if(count==4){   total+=summ;
        }}
        return total;
    }
};