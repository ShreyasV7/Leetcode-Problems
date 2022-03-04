class Solution {
private:
    int dp[601][101][101]  ; 
    int f(vector<string>&strs, int m, int n, int ind){
        
        if(ind == strs.size()) return 0 ;  
        
        if( (m==0 && n == 0) ||(m < 0 && n < 0)) return 0 ;  
        
        if(dp[ind][m][n] != -1) return dp[ind][m][n]  ; 
        
        int currZero =0 , currOne =0 ; 
        
        for(int i=0;i<strs[ind].size() ; i++){
            if(strs[ind][i] == '1') currOne++ ; 
            else currZero++ ; 
        }
        
        if(currZero <= m && currOne <=n){
            
            return dp[ind][m][n] =  max(1+f(strs,m-currZero,n-currOne,ind+1) , f(strs,m,n,ind+1) ) ;
        }
        else{
            return dp[ind][m][n] = f(strs,m,n,ind+1) ; 
        }
    }
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        
        int len = strs.size()  ;
        memset(dp,-1,sizeof(dp)) ;  
        int ans = f(strs,m,n,0)  ; 
        return ans; 
    }
};