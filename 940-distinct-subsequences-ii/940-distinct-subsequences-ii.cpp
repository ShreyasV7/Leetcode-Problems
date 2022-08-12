class Solution {
public:
    typedef long long int ll ; 
    ll mod = 1e9+7   ; 
    
    ll f(ll i, string &s, vector<ll>&dp){
        ll n = s.size() ;  
        if(i>=n) return 0 ; 
        
        ll res = 0  ;
        if(dp[i]!=-1) return dp[i]  ; 
        
        vector<ll>vis(27,0)  ; 
       // vis[s[i]-'a'] = 1;  
        for(ll j = i ; j<n ; ++j){
            if(vis[s[j]-'a'] == 1) continue;  
            
            ll k = 1 + f(j+1,s,dp)%mod  ;
            k=k%mod ; 
            res = res % mod + k ;        
            vis[s[j]-'a'] = 1; 
        }
        
        return dp[i] = res % mod ; 
    }
    int distinctSubseqII(string s) {
        ll n = s.size()  ;
        vector<ll>dp(n+10,-1)  ;
        return f(0,s,dp)  ;
        
        //t.c = o(n^2) ;
        // s.c = o(n^2)  ; 
    }
};