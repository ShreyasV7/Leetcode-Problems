class Solution {
public:
    typedef long long int ll ;  
    const ll mod = (ll)1e9+7 ; 
    
    ll f(ll i,ll s,ll e,ll k,vector<vector<ll>>&dp){
        if(k==0){
           if(i==e) return 1 ;  
           else
           return 0 ; 
        }
        
        if(dp[i+1001][k]!=-1) return dp[i+1001][k] ;  
        
        ll left = f(i-1,s,e,k-1,dp)  ; 
        ll right = f(i+1,s,e,k-1,dp)  ; 
        
        return dp[i+1001][k] = (left+right)%mod;  
    }
    int numberOfWays(int s, int e, int k) {
        vector<vector<ll>>dp(5001,vector<ll>(1001,-1)) ; 
        return f(s,s,e,k,dp)  ;
    }
};