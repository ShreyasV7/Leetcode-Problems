class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size()  ; 
        vector<int>f(n, 0 )  ;  
        
        for(int i=0;  i<n; i++){
            
            if(i < 2 ){
                f[i] = cost[i]  ; 
            }
            else{
                f[i] = cost[i] + min(f[i-1] , f[i-2])  ;  
            }
        }
        
        return min(f[n-1],f[n-2]) ;  
        
    }
};