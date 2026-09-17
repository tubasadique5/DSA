class Solution {
public:
long long fun(vector<int> &piles,int speed)
{
    long long h=0;
    for(int i=0;i<piles.size();i++)
    {
        h=h+piles[i]/speed;
        if(piles[i]%speed!=0)
        h++;
    }
    return h;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,n=piles.size();
         int high=*max_element(piles.begin(),piles.end());
        int result=high;
       
        while(low<=high)
        {
            int guess=low+(high-low)/2;
            long long hour=fun(piles,guess);
            if(hour>h){
            low=guess+1;
            }
            else
            {
                result=guess;
                high=guess-1;
            }
        }
        return result;
    }
};