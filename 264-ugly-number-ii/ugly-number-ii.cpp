class Solution {
public:
    int nthUglyNumber(int n) {
     
      priority_queue<long long, vector<long long>, greater<long long>> pq;
      unordered_set<long long> st;
      long long first=1,second=1,third=1;
      pq.push(1);
      st.insert(1);
      for(int i=1;i<n;i++){
        long long temp=pq.top();
        pq.pop();
       first=temp*2;
       second=temp*3;
       third=temp*5;
        if(st.find(first)==st.end()){
            pq.push(first);
            st.insert(first);
        }
          if(st.find(second)==st.end()){
            pq.push(second);
            st.insert(second);
        }
          if(st.find(third)==st.end()){
            pq.push(third);
            st.insert(third);
        }
      }
     
     return pq.top();
    }
};