class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int n = gas.size()  ; 
        int m = cost.size()  ; 
        
        int fuel = 0 , price = 0 ; 
        
        for(int i=0;i<n;i++){
            fuel+=gas[i]  ; 
        }
        
        for(int i=0;i<m;i++){
            price+=cost[i]  ; 
        }
        
        if(fuel < price)
            return -1 ; 
        
        int currFuel =0 , ind = 0 ;  
        
        for(int i=0;i<n;i++){
            if(currFuel  < 0){
                ind = i ;  
                currFuel = 0  ;
            }
            
            currFuel+=(gas[i]-cost[i])  ; 
        }
        
        return ind;  
    }
};