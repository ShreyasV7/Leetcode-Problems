typedef long long int ll ;  
const ll MOD = (ll)1e9+7 ;  
class Solution {
private:
    ll function(ll n){
        
        vector<ll>dp(n+1,0)  ;
        dp[0] = 1ll ; 
        dp[1] = 1ll ;  
        
        for(ll i = 2;i<=n;i++){
            dp[i] = (dp[i-1]%MOD * (2*i*i - i)%MOD)%MOD  ; 
        }
        
        return dp[n]  ; 
    }
public:
    int countOrders(int n) {
    
        ll ans = function(n)   ; 
        return ans ; 
    }
};