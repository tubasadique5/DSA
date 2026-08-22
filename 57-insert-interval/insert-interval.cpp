class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>res;
        if(intervals.size()==0)
        {
            return {newInterval};
        }
        int start1=intervals[0][0];
        int end1=intervals[0][1];
        for(int i=1;i<intervals.size();i++)
        {
           int start2=intervals[i][0];
           int end2=intervals[i][1];
            if(end1>=start2)
            {
                start1=start1;
                end1=max(end1,end2);
                continue;
            }
            else{
                res.push_back({start1,end1});
                start1=start2;
                end1=end2;
            }
        }
            res.push_back({start1,end1});
            int insert=false;
            int start=newInterval[0];
            int end=newInterval[1];
            vector<vector<int>> ans;
            for(int i=0;i<res.size();i++)
            {
                int start2=res[i][0];
                int end2=res[i][1];
                if(end2<start)
                {
                    ans.push_back({start2,end2});
                }
                else if(start2>end)
                {
                    if(insert==false)
                    {
                        ans.push_back({start,end});
                        insert=true;

                
                }
                ans.push_back({start2,end2});
            }
            else{
                start=min(start,start2);
                end=max(end,end2);
            }
            }

        if(insert==false)
        {
            ans.push_back({start,end});
        }
        return ans;
            
    }
};