class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int v1,v2,v3;
        int minending=nums[0];
        int maxending=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            v2=minending*nums[i];
            v1=nums[i];
            v3=maxending*nums[i];
            maxending=max(v1,max(v2,v3));
            minending=min(v1,min(v2,v3));
            ans=max(ans,max(minending,maxending));
            }
        return ans;
    }
};