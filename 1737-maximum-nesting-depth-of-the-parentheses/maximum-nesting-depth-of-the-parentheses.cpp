class Solution {
public:
    int maxDepth(string s) {
        stack <char> st; int ans=0;
        for(auto& x : s){
            if(x=='('){
                st.push('x');
            }
            if(x==')'){st.pop();}
            ans=max(ans,(int)st.size());
        }
        return ans;
    }
};