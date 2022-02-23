  /*
         t-1 => [9,3,2,6,12,4] coins = 10
         o/p = 3          
         t-2 => [4,4,4,4,4] coins = 20
         o/p = 5 
*/
        
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
         
        int len = costs.size()  ; 
        
        /* edge case = [90,34,78,32] 
           coins = 12 
        */
        sort(costs.begin() , costs.end()) ;  
        
        //[32,34,78,90]
        int icecrms =0 ; 
        
        
        for(int i = 0 ; i < len ; i++){
            
            int currCost = costs[i]  ; 
            /*                 
                                index
               currCost = 32 -> 0
               currCost = 34 -> 1
               currCost = 78 -> 2
               currCost = 90 -> 3
            */
            if(currCost <= coins){   
    
                icecrms++ ;  
                coins-=currCost ; 
                
                if(coins <= 0)
                    break ; 
            }
        }
        
        return icecrms ; 
    }
};