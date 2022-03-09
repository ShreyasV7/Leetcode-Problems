// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	
	void dfs(int node, vector<int>adj[], vector<bool>&visit, stack<int>&stk){
	    
	    visit[node] = true ; 
	    
	    for(auto k : adj[node]){
	        if(visit[k]==false){
	            dfs(k,adj,visit,stk) ;  
	        }
	    }
	    
	    stk.push(node)  ; 
	}
	
	void reverseDfs(int node, vector<int>trans[] , vector<bool>&visit){
	    
	    visit[node] = true;  
	    
	    for(auto k : trans[node]){
	        if(visit[k]==false){
	            reverseDfs(k,trans,visit)  ; 
	        }
	    }
	}
    int kosaraju(int V, vector<int> adj[])
    {
        vector<bool>visit(V+1,false)  ;
        
        stack<int>stk ; 
        
        for(int i=0;i<V;i++){
            if(visit[i]==false){
                dfs(i,adj,visit,stk)  ;
            }
        }
        
        vector<int>trans[V+1] ; 
        
        for(int i=0;i<V;i++){
            visit[i]=false;  
            for(auto k : adj[i]){
                trans[k].push_back(i)  ;
            }
        }
        
        int cc = 0  ; 
        while(stk.size() > 0){
            
            int tt = stk.top()  ; 
            stk.pop()  ; 
            
            if(visit[tt]==false){
                reverseDfs(tt,trans,visit) ; 
                cc++ ; 
            }
        }
        
        return cc;  
    }
};

// { Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends