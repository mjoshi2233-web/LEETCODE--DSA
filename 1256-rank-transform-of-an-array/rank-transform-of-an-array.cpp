class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> neww=arr;
        int rank=1;
        sort(neww.begin(),neww.end());
        map <int,int> mpp;
        for( int i=0;i<neww.size();i++){
            if(i!=0 && neww[i]==neww[i-1]){continue;}
            mpp[neww[i]]=rank;rank++;
        }
        for( int i=0;i<arr.size();i++){
            arr[i]=mpp[arr[i]];
        }
        return arr;
        
    }
};