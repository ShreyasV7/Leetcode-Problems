class Solution {
public:
    
    double dp[101][101][101] ; 
    double func(int n , int k , int x ,int y){
        
        if(x < 0 || x >= n || y  < 0 || y >= n){
            return 0.000 ; 
        }
        
        if(k == 0 ) return 1.000  ; 
        
        if(dp[x][y][k]) return dp[x][y][k]  ; 
        double ans = 0  ; 
       
        ans+=0.125*func(n,k-1,x-2,y-1)  ; 
        ans+=0.125*func(n,k-1,x-1,y-2)  ; 
        ans+=0.125*func(n,k-1,x+2,y+1)  ; 
        ans+=0.125*func(n,k-1,x+1,y+2)  ; 
        ans+=0.125*func(n,k-1,x-2,y+1)  ; 
        ans+=0.125*func(n,k-1,x+2,y-1)  ; 
        ans+=0.125*func(n,k-1,x-1,y+2)  ;
        ans+=0.125*func(n,k-1,x+1,y-2)  ;  
        
        return dp[x][y][k] = ans  ;
    }
    double knightProbability(int n, int k, int row, int column) {
        
        return  func(n,k,row,column)  ;  
    }
};