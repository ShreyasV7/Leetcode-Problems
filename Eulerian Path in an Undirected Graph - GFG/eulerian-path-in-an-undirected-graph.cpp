// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int eulerPath(int N, vector<vector<int>> graph){
        
        int cnt=  0;
        for(int i=0;i<graph.size(); ++i){
            int res= 0; 
            for(int j=0;j<graph[i].size(); ++j){
                if(graph[i][j]==1) res++ ; 
            }
            
            if(res % 2) cnt++ ; 
        }
        
        if(cnt==2)return 1;  
        return 0 ; 
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> graph(N, vector<int>(N, -1));
        for(int i = 0;i < N;i++)
            for(int j = 0;j < N;j++)
                cin>>graph[i][j];
        
        Solution ob;
        cout<<ob.eulerPath(N, graph)<<"\n";
    }
    return 0;
}  // } Driver Code Ends