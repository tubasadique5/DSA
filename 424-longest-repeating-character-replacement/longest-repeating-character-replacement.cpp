class Solution {
public:
    int characterReplacement(string s, int k) {
        int low=0,high=0,res=INT_MIN;
        unordered_map<char,int>f;
        for(high=0;high<s.size();high++)
        {
            f[s[high]]++;
            int len=high-low+1;
            int max_cnt=0;
            for(auto x:f){
                max_cnt=max(max_cnt,x.second);
            }
            int diff=len-max_cnt;
            while(diff>k)
            {
                f[s[low]]--;
                low++;
                len=high-low+1;
            for(auto x:f){
                max_cnt=max(max_cnt,x.second);
            }

                diff=len-max_cnt;
            }
            res=max(res,len);

        }
        return res;
    
        
    }
};