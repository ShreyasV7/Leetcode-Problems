// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
private:
    vector<vector<int>>res;
    void helper(int i,int j,int n,int m,vector<vector<int>>&grid,vector<int>&k){
        if(i<0 || i>=n || j<0 || j>=m) return  ; 
        
        if(j==m-1 && i==n-1){
            k.push_back(grid[i][j]) ; 
            res.push_back(k)  ; 
            k.pop_back()  ; 
            return  ; 
        }
        
        k.push_back(grid[i][j])  ; 
        helper(i+1,j,n,m,grid,k)  ;
        helper(i,j+1,n,m,grid,k)  ; 
        k.pop_back()  ;
    }
public:
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {
        vector<int>k ; 
        helper(0,0,n,m,grid,k)  ; 
        return res; 
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution ob;
        auto ans = ob.findAllPossiblePaths(n, m, grid);
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
  // } Driver Code Ends