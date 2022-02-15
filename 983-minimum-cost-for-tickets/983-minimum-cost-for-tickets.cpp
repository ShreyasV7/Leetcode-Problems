class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        
        int maxDay = days.back()  ; 
        vector<int>dp(365+1, 0)  ;  
        
        int j = 0  ; 
        for(int i=1 ; i <= maxDay; i++){
            
            if(i==days[j]){
                j++ ; 
                int mn1 = costs[0] + dp[i-1]   ; 
                int mn2 = costs[1] +dp[i-min(i,7)]   ; 
                int mn3 = costs[2] + dp[i-min(i,30)]  ; 
                
                dp[i] = min({mn1,mn2,mn3})  ;  
            }
            else{
                dp[i] = dp[i-1]  ; 
            }
        }
        
        return dp[maxDay] ; 
    }
};