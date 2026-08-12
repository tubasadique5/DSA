class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low=0, high=0, res=INT_MIN;
        unordered_map<int,int>f;
        for (high=0;high<nums.size();high++)
        {
            f[nums[high]]++;
            int len=high-low+1;
            int max_cnt=0;
            for(auto x:f){
                max_cnt=max(max_cnt,x.second);
            }
            int diff=f[0];
            while(diff>k)
            {
                f[nums[low]]--;
                low++;
                len=high-low+1;
                int max_cnt=0;
                for(auto x:f){
                    max_cnt=max(max_cnt,x.second);
                }
                diff=f[0];
            }
            res=max(res,len);
        }
        return res;
        
    }
};