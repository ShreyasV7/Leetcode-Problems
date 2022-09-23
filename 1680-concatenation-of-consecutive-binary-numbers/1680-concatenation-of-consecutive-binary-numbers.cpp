class Solution {
public:
    const int MOD = 1e9+7 ;  
    int numberOfSetBits(int x){
        int cnt =0 ; 
        while(x){
            int rem = x%2 ; 
            // if(rem) cnt++ ; 
            x/=2; 
            cnt++ ; 
        }
        return cnt  ; 
    }
    int concatenatedBinary(int n) {
        
        long long int res=0 ; 
        for(int i=1;i<=n;++i){
            int bits = numberOfSetBits(i) ; 
            res=((res<<bits)%MOD + i)%MOD;  
        }
        
        return res; 
    }
};