class Solution {
public:
    int lengthOfLongestSubstring(string s ) {
        int low=0,high=0,result=INT_MIN;
        unordered_map<char,int>f;
        for(high=0;high<s.size();high++)
        {
            f[s[high]]++;
            int len=high-low+1;
            while(f.size()<len)
            {
                f[s[low]]--;
                if(f[s[low]]==0)
                f.erase(s[low]);
                low++;
                len=high-low+1;
            }
            len=high-low+1;
            result=max(result,len);
        }
        if(result==INT_MIN)
        return 0;
        return result;
    }
};