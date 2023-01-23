class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>f(n+1,0)  ; 
        
        for(auto &it : trust){
            f[it[0]]-- ; 
            f[it[1]]++ ; 
        }
        
        for(int i=1;i<=n;i++){
            if(f[i]==n-1) return i ; 
        }
        
        return -1 ; 
    }
};