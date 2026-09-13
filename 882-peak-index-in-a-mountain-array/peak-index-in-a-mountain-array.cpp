class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
       int low=0,high=arr.size()-1,result=-1;
       while(low<=high)
       {
        int guess=low+(high-low)/2;
        if(arr[guess]<arr[guess+1])
        {
        low=guess+1;
        }
        else{
        result=guess;
        high=guess-1;
       } 
       }
       return result;
    }
};