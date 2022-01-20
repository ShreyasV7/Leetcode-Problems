class Solution {
public:
    
    bool func(int mid, vector<int>&piles, int h){
        
        int cnt = 0 ;  
        for(int i=0; i < (int)piles.size() ; i++){
            
            cnt+=(piles[i]/mid)  ; 
            if(piles[i] % mid != 0) cnt++ ; 
        }
        
        return (cnt <= h) ; 
    }
    int minEatingSpeed(vector<int>& piles, int h) {
       
        int n = piles.size()  ; 
        
        int l = 1 , r = 1e9 ; 
        int k = INT_MAX; 
        while(l<r){
            
            int mid = (l+r)/2 ; 
            
            if(func(mid,piles,h)){
                r = mid ; 
            }
            else{
                l = mid+1; 
            }
        }
        
        return l ; 
    }
};