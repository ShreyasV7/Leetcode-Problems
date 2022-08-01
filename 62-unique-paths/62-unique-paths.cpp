class Solution {
public:
    int uniquePaths(int m, int n) {
        
        long long int res = 1; 
        int i = m+n-2;
        int j = 1 ; 
        
        for(;i>=max(m,n);i--,j++){
            res = (res*i)/j ;
        }
        return res;
    }
};