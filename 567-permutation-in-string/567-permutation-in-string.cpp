class Solution {
public:
    bool checkInclusion(string s1, string s2) {
          map<char,int>hashs1 ; 
            map<char,int>hashs2 ; 
            
            for(char &it : s1){
                hashs1[it]++ ;  
            }
            
            int right = 0 , left = 0  ; 
            
            int len2 = s2.length()  ; 
            int len1 = s1.length()   ; 
            
            while(right < len2){
                
                if(right-left+1 < len1){
                    hashs2[s2[right]]++  ; 
                    right++ ; 
                }
                else{
                    
                    hashs2[s2[right]]++ ; 
                    right++  ;
                    
                    if(hashs1==hashs2) return true ; 
                    
                    hashs2[s2[left]]--  ; 
                    
                    if(hashs2[s2[left]]<=0) hashs2.erase(s2[left])  ; 
                    
                    left++ ;  
                }
                
            }
            
            return false; 
    }
};