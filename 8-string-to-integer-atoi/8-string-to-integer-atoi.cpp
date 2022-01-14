class Solution {
public:
    int myAtoi(string s) {
        
        if(s.empty()) return  0 ;  
        
        int i=0;
        int n = s.length()  ; 
        
        while(i<n && s[i]==' ')
            i++ ; 
        
        if(i==n) return 0 ;  
        bool neg = 0   ; 
        if(s[i]=='-'){
            neg = 1 ; 
            i++ ;  
        }
        else if(s[i]=='+'){
            i++ ;  
        }
        
        long long int res = 0 ; 
        while(s[i]>='0' && s[i]<='9'){
            res=res*10;
             if(res>=INT_MAX || res<=INT_MIN){
                break  ; 
            }
          
            res+=(s[i]-'0')  ; 
            i++ ; 
        }
        
    
        if(neg) res*=(-1)  ; 
        
        if(res>=INT_MAX) return INT_MAX; 
        if(res<=INT_MIN) return INT_MIN ; 
        
        return (int)res;  
    }
};