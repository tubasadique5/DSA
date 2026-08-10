class Solution(object):
    def minSubArrayLen(self, target, nums):
        low=0
        high=0
        total=0
        ans=len(nums)+1
        while high<len(nums):
            total=total+nums[high]
            while total>=target:
                ans=min(ans,high-low+1)
                total=total-nums[low]
                low+=1
            high+=1
        if ans==len(nums)+1:
            return 0
        return ans        

