class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        int n=words.size();
        unordered_map<string,int>f;
        for(int i=0;i<n;i++)
          f[words[i]]++;
        priority_queue<pair<int,string>>pq;
        for(auto i:f)
        {
            string element=i.first;
            int freq=i.second;
            pq.push({-freq,element});
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<string>res;
        while(!pq.empty())
        {
            res.push_back(pq.top().second);
            pq.pop();
        }   
        reverse(res.begin(),res.end());
        return res;
    }
};