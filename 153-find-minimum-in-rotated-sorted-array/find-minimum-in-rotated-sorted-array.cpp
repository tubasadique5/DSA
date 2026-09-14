class Solution {
public:
    int findMin(vector<int>& nums) {
     int low=0,n=nums.size(),high=n-1,result=-1;
     while(low<=high)
     {
        int mid=low+(high-low)/2;
        if(nums[mid]>nums[n-1])
        {
            low=mid+1;
        }
        else
        {
            result=mid;
            high=mid-1;
        }
     }
     return nums[result];   
    }
};