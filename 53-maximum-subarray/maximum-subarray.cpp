class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int v1,v2;
        int bestending=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            v1=bestending+nums[i];
            v2=nums[i];
            bestending=max(v1,v2);
            ans=max(ans,bestending);
            }
        return ans;
    }
};