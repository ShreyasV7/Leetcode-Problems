class Solution {
public:
    int helper(int i,int j, int m, int n,vector<vector<int>>&cache){
        if(i==m-1 && j==n-1) return 1;  
        if(i==m || j==n) return 0  ;
        if(cache[i][j]!=-1) return cache[i][j]  ;
        return cache[i][j] = helper(i+1,j,m,n,cache)+helper(i,j+1,m,n,cache) ; 
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>cache(m,vector<int>(n,-1))  ; 
        int res = helper(0,0,m,n,cache)  ; 
        return res;
    }
};