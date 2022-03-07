class Solution {
public:
    string reverseWords(string s) {
        
        int n = s.length()  ;  
        int i = 0 , j = 0 ;  
        
        string ans = ""  ;  
        
        while(i<n ){
            
            while(i<n && s[i]==' ') i++ ; 
            
            j = i ;  
            
            while(j<n && s[j]!= ' ') j++ ;
            
            ans = s.substr(i,j-i)+" "+ans  ; 
            
            i = j+1; 
        }
        
        int k = 0 ; 
        
        while(ans[k]==' '){
            k++ ;
        }
                 
        string res="" ; 
        res = ans.substr(k) ; 
        
        k = (int)res.size()-1;  
        
        while(res[k]==' '){
            k--  ; 
        }
        
        res = res.substr(0,k+1); 
        
        return res;
    }
};