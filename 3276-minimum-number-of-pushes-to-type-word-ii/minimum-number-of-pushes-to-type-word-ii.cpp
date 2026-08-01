class Solution {
public:
    int minimumPushes(string word) {
      vector<int> arr(26,0);
       for(int i=0;i<word.size();i++){
        arr[word[i]-'a']++;
       }
       sort(arr.begin(),arr.end(),greater<int>());
       int pushes=0;
       for(int i=0;i<=25;i++){
        if(arr[i]!=0){
            pushes+=(i/8+1)*arr[i];
        }
       }
       return pushes;
    }
};