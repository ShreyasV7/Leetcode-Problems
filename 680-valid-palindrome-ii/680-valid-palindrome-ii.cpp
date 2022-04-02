class Solution {
private:
    bool checkPalindrome(int x, int y, string &s){
        
        while(x < y){
            if(s[x] != s[y]) return false ; 
            x++ ; 
            y-- ; 
        }
        return true; 
    }
public:
    bool validPalindrome(string s) {
        
        int n=s.size() ; 
        int l = 0 , r = n-1 ; 
        
        while(l < r){
            
            if(s[l] != s[r]){
                
                bool option1 = checkPalindrome(l,r-1,s) ; 
                bool option2 = checkPalindrome(l+1,r,s)  ; 
                
                return ( option1 || option2 )  ; 
            }
            l++ ; 
            r-- ; 
        }
        return 1 ; 
    }
};