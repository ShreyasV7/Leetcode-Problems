class Solution {
public:
    typedef long long int  ll ;  
    double myPow(double x, int n) {
        
        
        double res = 1.0000 ;  
        
        ll m = n ; 
        m = abs(m)   ; 
        
        while(m){
            
            if(m % 2){
                res = res * x ; 
                m-- ; 
            }
            else{
                x*=x ; 
                m/=2 ;
            }
        }
        
        if(n < 0) res = 1.000/res  ; 
        return res; 
    }
};