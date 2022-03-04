class Solution {
public:
    typedef long long int ll  ; 
    
    ll func(ll mid , vector<int>&time, int total){
        
        ll r = 0  ; 
        
        for(auto &it : time){
            r+=(mid/it)  ; 
        }
        return r;  
    }
    long long minimumTime(vector<int>& tim, int total) {
        
        ll n = tim.size()  ; 
        
        ll l = 0 , r = 1e14+69 ;  
        
        sort(tim.begin(),tim.end()) ; 
        
        ll ans = 0  ; 
        
        while(l<=r){
            
            ll mid = (l+r)/2ll ; 
            
            if(func(mid,tim,total) >= total){
                ans = mid ; 
                r = mid-1 ; 
            }
            else{
                l = mid+1;  
            }
        }
        
        return ans;  
    }
};