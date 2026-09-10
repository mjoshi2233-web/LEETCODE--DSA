class Solution {
public:
    bool equalFrequency(string word) {
        unordered_map <char,int> mp;
        set <int> freq;
        int maxx=-1,minn=200;char str,str2;
        for(int i=0;i<word.length();i++){
            mp[word[i]]++;
           
        }
        for(auto x:mp){
            freq.insert(x.second);
            maxx=max(maxx,x.second);
            minn=min(minn,x.second);
            if(freq.size()>2)return false;
        }
        if(freq.size()==1){
           if(mp.size()==1){return true;}
           for(auto x:mp){
            if(x.second!=1){return false;}
           }
            return true;
        }
        else
        { int count=0,count1=0;
            for(auto x:mp){
                if(x.second==maxx){count++;}
                else{
                    count1++;

                }
            }
            return ((count==1 && maxx-minn==1)|| ( count1==1 && minn==1));


        }
        
        
        

        return false;

       





    }
};