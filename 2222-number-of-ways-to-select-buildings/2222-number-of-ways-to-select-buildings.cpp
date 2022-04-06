class Solution {
public:
    typedef long long int ll  ; 
    
    ll dp[3][100008][7] ; 
    ll func(ll index, ll prev, string &s, ll k ){
        if(k==3){
            return 1 ; 
        }
        
        if(index >= s.length()){
            return 0  ; 
        }
        
        if(dp[k][index][prev] != -1) return dp[k][index][prev]  ;
        
        ll total = 0 ;  
        total=func(index+1,prev,s,k)  ; 
        if(prev != s[index]-'0'){
            total += func(index+1,s[index]-'0',s,k+1)  ; 
        }
        
        return dp[k][index][prev]=total  ; 
    }
    long long numberOfWays(string s) {
        memset(dp,-1ll,sizeof(dp))  ; 
        return func(0,3,s,0) ; 
    }
};