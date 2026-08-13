class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low=0,high=0,res=INT_MAX,sum=0;
        for(high=0;high<nums.size();high++)
        {
            sum=sum+nums[high];
            while(sum>=target)
            {
                int len=high-low+1;
                 res=min(res,len);
                sum=sum-nums[low];
                low++;

            }
           

        }
        if(res==INT_MAX)
        return 0;
       return res;
        
    }

};