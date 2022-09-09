class Solution {
public:
    int cache[101][101][2] ;
    int f(int i, vector<int>&piles,int m,int alice){
        
        int n = piles.size()  ;
        if(i>=n) return 0 ;
        int total = 0 , cnt=0 ;  
        
        if(cache[i][m][alice]!=-1) return cache[i][m][alice] ;  
        
        if(alice==1){
            int j ; 
            for(j=1;j<=m*2 ;j++){ 
                       if(j+i-1<n)
                        cnt+=piles[j+i-1]  ; 
                        // m = max(m,j) ; 
             total = max(total,cnt+f(i+j,piles,max(j,m),0));
            }
            //cache[i][m][alice] = total ; 
        }
        else{
           
            total = INT_MAX;
            int j  ;
            for(j=1;j<=m*2 ;j++){
                //m = max(m,j)  ; 
                total = min(total,f(i+j,piles,max(j,m),1))  ; 
            }
        }
        
        return cache[i][m][alice] = total ; 
    }
    int stoneGameII(vector<int>& piles) {
        int n=piles.size() ;  
        memset(cache,-1,sizeof(cache)) ; 
        int total = f(0,piles,1,1) ;  
        return total ; 
        // time complexity : O(n*n*2) 
        // space complexity : O(n*n*2)
    }
};