class Solution {
public:
    int minSteps(int n) {
        if(n==1) return 0 ; 
        
        long long int res = 0  ; 
        
        for(int i = 2; i<=n ;i++){
            
            if(n % i == 0 ){
                
                while(n % i == 0 ){
                    
                    n = n/i ;
                    res+= i ; 
                }
            }
        }
        
        return res; 
    }
};