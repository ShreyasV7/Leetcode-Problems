class Solution {
public:
    int mx=INT_MIN;  
    void dfs(int node, vector<int>adj[],vector<int>&vis,int cnt,vector<int>&dep){
        vis[node] = 1;  
        dep[node] = cnt;  
        
        for(auto c : adj[node]){
            if(vis[c]==0){
                dfs(c,adj,vis,cnt+1,dep)  ; 
            }
            else if(vis[c]==1){
                mx = max(mx,dep[node]-dep[c]+1)  ;  
            }
        }
        
        vis[node]=-1; 
    }
    int longestCycle(vector<int>& edges) {
        int n=edges.size()  ; 
        vector<int>adj[n+1]  ; 
        
        for(int i=0;i<n;i++){
            if(edges[i]!=-1){
                adj[i].push_back(edges[i])  ; 
            }
        }
        
        vector<int>vis(n+10,0)  ;
        vector<int>dep(n+10,0)  ;
        
        for(int i=0;i<n;i++){
            if(vis[i]==0){
 
                dfs(i,adj,vis,0,dep)  ; 
            }
        }
        if(mx==INT_MIN) return -1; 
        return mx  ; 
    }
};