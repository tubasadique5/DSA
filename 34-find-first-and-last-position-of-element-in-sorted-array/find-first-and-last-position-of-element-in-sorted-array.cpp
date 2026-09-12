class Solution {
public:
int searchfirst(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int result=-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]<target)
            {
                low=mid+1;
            }
            else if(nums[mid]>target)
            {
                high=mid-1;
            }
            else
            {
                result=mid;
                high=mid-1;
            }
        }
        return result;
    }
        int searchlast(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int result=-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]<target)
            {
                low=mid+1;
            }
            else if(nums[mid]>target)
            {
                high=mid-1;
            }
            else
            {
                result=mid;
                low=mid+1;
            }
        }
        return result;
        }
    vector<int> searchRange(vector<int>& nums, int target) {
    int first=searchfirst(nums,target);
    int last=searchlast(nums,target);
    return {first,last};
}
};