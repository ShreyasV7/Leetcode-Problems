class Solution {
public:
    int longestStrChain(vector<string>& words) {
        unordered_map<string,int> mp;
        
        sort(words.begin(),words.end(),[&](const string& s1, const string& s2){return s1.length()<s2.length();});
        
        int m = INT_MIN;
        for(auto x: words)
        {
            for(int i=0;i<x.length();i++)
                m = max(m, mp[x]=max(mp[x],1+mp[x.substr(0,i)+x.substr(i+1)]));
        }
        return m;
    }
};
