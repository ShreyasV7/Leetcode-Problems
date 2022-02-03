class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        
        int l = 0 , r = 0 ; 
        
        int lenp = p.length()  ; 
        int lens = s.length()  ; 
        vector<int>mp1(26,0) ; 
        vector<int>mp2(26,0) ; 
        
        if(lenp > lens){
            vector<int>f; 
            return f;
        }
        
        vector<int>ans ; 
        while(r < lenp){
            mp1[p[r]-'a']++  ; 
            mp2[s[r]-'a']++  ;
            r++ ; 
        }
        r-- ; 
        while(r < lens){
            
            if(mp1==mp2){
                ans.push_back(l)   ;
            }
            r++  ; 
            if(r != lens){
                mp2[s[r]-'a']++  ; 
            }
            mp2[s[l]-'a']-- ;  
            
            l++  ;
        }
        
        return ans; 
    }
};