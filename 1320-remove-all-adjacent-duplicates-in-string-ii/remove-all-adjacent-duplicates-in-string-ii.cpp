class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        int i;
        string res="";
        for(i=0;i<s.length();i++)
        {
            char c=s[i];

            if(st.empty())
            {
                st.push({c,1});
                continue;
            }
                if(st.top().first!=c)
                {
                   st.push({c,1});
                   continue;
                }
                if(st.top().second<k-1)
                {
                    pair<char,int>p=st.top();
                    st.pop();
                st.push({p.first,p.second+1});
                continue;
                
                
            }
            st.pop();
        }
        while(!st.empty())
        {
            pair<char,int>p=st.top();
            st.pop();
            while(p.second--)
            {
                res.push_back(p.first);
            }
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};