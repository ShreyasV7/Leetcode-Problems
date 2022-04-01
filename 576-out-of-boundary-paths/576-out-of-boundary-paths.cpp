class Solution {
public:
    typedef long long int ll  ; 
    
    ll MOD = (int)1e9+7  ; 
    ll dp[60][60][60]  ; 
    
    ll func(int m , int n , int k , int x, int y){
        
        if( x < 0 || y < 0 || x == m || y == n){
            return 1 ; 
        } 
        
         if(k==0) return 0 ; 
        
        if(dp[k][x][y] != -1) return dp[k][x][y]  ; 
        
        ll f1 = func(m,n,k-1,x+1,y) % MOD  ;  
        ll f2 = func(m,n,k-1,x-1,y) % MOD ; 
        ll f3 = func(m,n,k-1,x,y-1) % MOD ; 
        ll f4 = func(m,n,k-1,x,y+1) % MOD ;
        
        return dp[k][x][y] = (f1 % MOD+f2%MOD+f3%MOD+f4%MOD) % MOD;  
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        memset(dp,-1,sizeof(dp))   ; 
        
        ll paths = func(m,n,maxMove,startRow,startColumn) % MOD ; 
        return paths ; 
    }
};