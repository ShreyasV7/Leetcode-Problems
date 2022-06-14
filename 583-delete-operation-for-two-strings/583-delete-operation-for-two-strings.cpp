class Solution {
public:
    int t[501][501];
    int solve(string s1, string s2, int m, int n) {

        if(m == 0 || n == 0)
            return m+n;
        
        if(t[m][n] != -1)
            return t[m][n];
        
        if(s1[m-1] == s2[n-1])
            return t[m][n] = solve(s1, s2, m-1, n-1);
    
        return t[m][n] = 1 + min(solve(s1, s2, m-1, n), solve(s1, s2, m, n-1));
    }
    
    int minDistance(string s1, string s2) {
        memset(t, -1, sizeof(t));
        
        int m = s1.length();
        int n = s2.length();
        
        return solve(s1, s2, m, n);
        
    }
};