class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int n=order.size() ; 
        unordered_map<int,int>mp ; 
        
        for(int i=0;i<n;++i){
            mp[order[i]-'a']=i;  
        }
        
        for(auto &i : words){
            for(auto &j: i){
                j=mp[j-'a'] ; 
            }
        }
        
        if(is_sorted(words.begin(),words.end())) return 1; 
        return 0  ; 
    }
};