class Solution {
public:
    int minCost(string colors, vector<int>& nt) {
        
        int n = colors.size() , m = nt.size()  ; 
        
        int i=0,j=0 ; 
        
        int mnCost = 0 ; 
        while(i<n && j<m){
            int curr = 0 , total = 0  ;
            while(colors[j]==colors[i]&&j<m){
                total+=nt[j]  ;
                curr = max(curr,nt[j]);
                j++ ; 
            }
            mnCost+=total-curr ; 
            i=j ; 
        }
        return mnCost ; 
    }
};