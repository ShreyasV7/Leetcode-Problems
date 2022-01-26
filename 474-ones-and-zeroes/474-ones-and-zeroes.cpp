class Solution {
public:
    int dp[603][103][103]  ; 
    int func(vector<string>&str , int m , int n , int ind){
        if(ind >= str.size()){
            return 0 ; 
        }
        
        if(m < 0 || n < 0) return 0 ; 
        if(m==0 && n==0) return 0 ; 
        
        if(dp[ind][m][n] != -1) return dp[ind][m][n]  ; 
        
        string k = str[ind] ;  
        int ones = 0 , zero=0 ; 
        for(auto l : k){
            if(l=='1') ones++ ; 
            else zero++ ; 
        }
        
        if(n >= ones && m >=zero ){
            return dp[ind][m][n] = max(1+func(str,m-zero,n-ones,ind+1) , func(str,m,n,ind+1))   ;
        }
        else{
            return dp[ind][m][n] = func(str,m,n,ind+1)  ; 
        }
        
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        
        int sz = strs.size()  ;
         memset(dp,-1,sizeof(dp));
        //vector<vector<vector<int>>>dp(601,vector<vector<int>>(101,vector<int>(101,-1)))  ; 
        
        return func(strs,m,n,0) ; 
    }
};