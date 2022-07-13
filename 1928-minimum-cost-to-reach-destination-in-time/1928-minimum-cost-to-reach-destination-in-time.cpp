class Solution {
public:
    int helper(int node, vector<pair<int,int>>adj[],vector<int>&fees,int maxTime,int totalNodes,int timer,vector<vector<int>>&dp){
       
        if(timer > maxTime) return 10000000 ; 
        if(node==totalNodes){
            return fees[totalNodes]  ; 
        }
        
        if(dp[timer][node]!=-1) return dp[timer][node]  ; 
        
        int cost = 10000000 ;    
        //int res;
        for(auto &it : adj[node]){ 
            if(timer+it.second<=maxTime){
                cost = min ( cost, fees[node] + helper(it.first,adj,fees,maxTime,totalNodes,timer+it.second,dp) ); 
            }
        }
        
       return dp[timer][node] = cost; 
    }
    int minCost(int maxTime, vector<vector<int>>& edges, vector<int>& fees) {
        int n = edges.size()  ; 
        vector<pair<int,int>>adj[n+1]  ;
        vector<vector<int>>dp(2002,vector<int>(2002,-1))  ; 
        
        int m = 0 ; 
        for(int i=0;i<n;i++){
            int u = edges[i][0]  ;
            int v = edges[i][1]  ; 
            int t = edges[i][2] ; 
            
            adj[u].push_back({v,t})  ; 
            adj[v].push_back({u,t})  ;  
            m = max({m,u,v})  ; 
        }
        
        int res = helper(0,adj,fees,maxTime,m,0,dp)  ;
        if(res>=10000000) return -1;
        return res; 
    }
};