class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int nodelete=arr[0];
       int onedelete=-1000000000;
      int  res=arr[0];
      for(int i=1;i<arr.size();i++)
      {
        int prevnodelete=nodelete;
        int prevonedelete=onedelete;
        nodelete=max(arr[i],prevnodelete+arr[i]);
        onedelete=max(prevnodelete,prevonedelete+arr[i]);
        res=max(res,max(nodelete,onedelete));
      }
      return res;

    }
};