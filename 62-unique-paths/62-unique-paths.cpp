class Solution {
public:
    int uniquePaths(int m, int n) {
        
        vector<vector<int>>cache(m,vector<int>(n,0))  ; 
        
        cache[m-1][n-1] = 1;  
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(i+1<m) 
                    cache[i][j]+=cache[i+1][j]  ; 
                if(j+1<n) 
                    cache[i][j]+=cache[i][j+1]  ; 
            }
        }
        
        return cache[0][0] ; 
    }
};