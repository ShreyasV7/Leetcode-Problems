class Solution {
public:
    typedef long long int ll ;  
    int mySqrt(int x) {
        
        ll l = 0 , r = x;  
        ll res = 0 ;  
        while(l<=r){
            ll mid = (l+r)/2 ; 
            if(mid*mid == x){
                return mid ; 
            }
            else
            if(mid*mid >= x){
                r=mid-1 ;
            }
            else{
                l = mid+1; 
                res = mid; 
            }
        }
        return res ; 
    }
};