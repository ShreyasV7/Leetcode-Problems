class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        
        map<string,int>mp ; 
        
        for(auto k  : words) mp[k]++  ; 
        
        bool ok=0 ; 
        int cnt = 0 ; 
        for(auto j : words){
            
            string r="" ; 
            r+=j[1] ;  ; 
            r+=j[0]  ;
            
            if(r!=j && mp[j] > 0 && mp[r] > 0){
                mp[j]-- ; 
                mp[r]-- ; 
                cnt+=4; 
            }
            else if(r==j && mp[r] > 1){
                mp[r]-=2; 
                cnt+=4  ; 
            }
            else if(r==j && mp[r]==1 && !ok){
                ok = 1 ; 
                mp[r]-- ; 
                cnt+=2 ;
            }
        }
        
        return cnt; 
    }
};