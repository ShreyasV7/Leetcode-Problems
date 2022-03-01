class Solution {
private:
    int dfs(vector<pair<int,int>>adj[] , int src,  int dst, int k, int dp[696][696]){
        
        if(k < 0) return INT_MAX ; 
        
        if(src == dst) return 0  ; 
        
        if(dp[src][k] != -1) return dp[src][k]  ; 
        
        int mini = INT_MAX;  
        
        for(int i=0;i<adj[src].size(); i++){
            
            int f = dfs(adj,adj[src][i].first,dst,k-1,dp)  ;  
            if(f==INT_MAX) mini = min(f,mini)   ;
            else
            mini = min(mini, adj[src][i].second + f)  ; 
        }
        
        return dp[src][k] = mini ; 
    }
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
        vector<pair<int,int>>adj[n]  ; 
        
        int dp[696][696]  ;
        
        memset(dp,-1,sizeof(dp))  ;
        
        for(int i=0;i<(int)flights.size();i++){
            
            adj[flights[i][0]].push_back({flights[i][1] ,flights[i][2]}) ; 
            //adj[flights[i][1]].push_back({flights[i][0] ,flights[i][2]}) ;
        }
        
        int res = dfs(adj,src,dst,k+1,dp)  ;
        
        if(res == INT_MAX) return -1 ; 
        return res; 
    }
};