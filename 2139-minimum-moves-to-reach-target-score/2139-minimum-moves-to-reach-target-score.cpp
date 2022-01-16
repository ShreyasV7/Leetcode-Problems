class Solution {
public:
    int minMoves(int tar, int maxD) {
        
        int stps = 0  ; 
        while(tar > 0 && maxD > 0){
            
            if(tar % 2 ) tar-- ;  
            else{
                tar/=2 ; 
                maxD-- ;  
            }
            stps++ ;  
        }
        
        stps += tar-1 ; 
       // cout << tar <<"\n"  ; 
        
        return stps  ; 
        
    }
};