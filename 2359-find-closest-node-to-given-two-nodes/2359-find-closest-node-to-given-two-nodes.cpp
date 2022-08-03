class Solution {
public:
    void dfs(int node, vector<int>&d, vector<int>adj[],int len,vector<int>&vis){
        
       if(vis[node]==1) return ; 
        
       d[node] = len ; 
        vis[node] = 1; 
        for(auto c : adj[node]){
            dfs(c,d,adj,len+1,vis) ;  
        }
    
    }
    int closestMeetingNode(vector<int>&e , int n1, int n2) {
        
        int n = e.size()  ; 
        vector<int>d1(n,INT_MAX)  ; 
        vector<int>d2(n,INT_MAX)  ; 
        vector<int>vis1(n+1,0)  ; 
        vector<int>vis2(n+1,0)  ; 
        
        vector<int>adj[n+1] ; 
        for(int i=0;i<n;i++){
            if(e[i] != -1)
            adj[i].push_back(e[i])  ; 
        }
        dfs(n1,d1,adj,0,vis1)  ; 
        dfs(n2,d2,adj,0,vis2)  ; 
        
        int mn=INT_MAX,node=-1 ;
        
//         for(int i=0;i<d1.size();i++) if(d1[i]==-1) d1[i]=INT_MAX;  
//         for(int i=0;i<d2.size();i++) if(d2[i]==-1) d2[i]=INT_MAX;  
        
        // for(int i=0;i<d1.size(); i++){
        //     cout << i <<"-->"<< d1[i] <<"\n"  ; 
        // }
        // cout <<"000\n";
        // for(int i=0;i<d2.size(); i++){
        //     cout << i <<"-->"<< d2[i] <<"\n"  ; 
        // }
        
        
        for(int i=0;i<n;++i){
            
            if(max(d1[i],d2[i]) < mn && vis1[i] && vis2[i]){
                mn = max(d1[i],d2[i])  ; 
                node = i ;   
            }
        }
        
        // Time complexity : O(V)
        // Space complexity : O(n)
        
        
        return node;  
    }
};