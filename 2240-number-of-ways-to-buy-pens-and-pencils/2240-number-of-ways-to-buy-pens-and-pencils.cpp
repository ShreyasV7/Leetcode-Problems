class Solution {
public:
    typedef long long int ll ; 
    
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        
        ll k = total/cost2 ; 
        ll sum = 0 ; 
        for(ll j = 0 ; j <=k ; j++){
            ll r = total-(j*cost2);  
            ll f = r/cost1 ; 
            sum+=(f+1)  ; 
        }
        
        return sum ; 
    }
};