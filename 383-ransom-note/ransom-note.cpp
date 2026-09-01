class Solution {
public:
 bool fun(unordered_map<char,int>&r,unordered_map<char,int>&m)
        {
        for(auto i:r)
        {
            char c=i.first;
            int fr=i.second;
            int fm=m[c];
        
            if(fr>fm)
            return false;
        }
    
        return true;
    }
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>r;
        unordered_map<char,int>m;
        int i;
        for(i=0;i<ransomNote.size();i++)
        {
            r[ransomNote[i]]++;
        }
        for(i=0;i<magazine.size();i++)
        {
            m[magazine[i]]++;
        }
       
    return fun(r,m);
    }
    

};