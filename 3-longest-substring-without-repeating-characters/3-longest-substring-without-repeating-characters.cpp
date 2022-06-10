class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if(s=="") return 0 ; 
        
        set<char>setCharacters; 
        
        int n = s.size() , notEqual = 1, j = 0 ;
        for(int i=0;i<n;){
            
            while(setCharacters.count(s[i])){
                setCharacters.erase(s[j]) ; 
                j++ ; 
            }
            setCharacters.insert(s[i])  ; 
            notEqual = max(notEqual, i-j+1)  ; 
            i++ ; 
        }
        
        return notEqual ; 
    }
};