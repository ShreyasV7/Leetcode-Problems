class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if(s=="") return 0 ; 
        
        int count = 1 , n = s.size() ; 
        
        map<char,int>mp ; 
        
        int left = 0 , right = 0 ; 
        
        while(right < n){
            
            mp[s[right]]++  ; 
            
            while(mp[s[right]] > 1){
                
                mp[s[left]]--  ; 
                left++ ;  
            }
            
            right++ ; 
            
            count = max(count,right-left)  ; 
        }
        
        return count ;
    }
};