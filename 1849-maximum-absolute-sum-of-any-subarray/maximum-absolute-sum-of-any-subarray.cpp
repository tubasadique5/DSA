class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int v1,v2;
        int bestending=nums[0];
        int worstending=nums[0];
        int ans1=nums[0];
        int ans2=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            v1=bestending+nums[i];
            v2=nums[i];
            bestending=max(v1,v2);
            ans1=max(ans1,bestending);
            v1=worstending+nums[i];
            v2=nums[i];
            worstending=min(v1,v2);
            ans2=min(ans2,worstending);
            
        }
        return max(ans1,abs(ans2));
            }
};