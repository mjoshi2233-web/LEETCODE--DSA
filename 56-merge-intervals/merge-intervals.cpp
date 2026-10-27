class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        if(intervals.size()==1){return intervals;}
        for(int i=0;i<intervals.size();i++){
           int start=intervals[i][0];
           int end=intervals[i][1];
           while(i<intervals.size() && intervals[i][0]<=end){
            end=max(end,intervals[i][1]);i++;

           }
           if(i<intervals.size() && intervals[i][0]>end){i--;}
                ans.push_back({start,end});
            }
        
        return ans;
    }
};