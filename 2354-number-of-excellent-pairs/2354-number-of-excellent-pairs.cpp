class Solution {
public:
    typedef long long int ll ;  
    
    ll setBits(ll num){
        
        ll k = 0  ;
        
        while(num){
            k+=(num%2) ; 
            num= num>>1 ;  
        }
        
        return k ; 
    }
    long long countExcellentPairs(vector<int>& nums, int k) {
        set<ll>f ;  
        
        vector<ll>bits; 
        for(auto i : nums){
            f.insert(i)  ;
        }
        
        ll n = f.size()  ;
        
        for(auto p : f){
//             for(ll j = 0 ; j<nums.size(); j++){
                
//                 ll a=nums[i] , b = nums[j]  ;
                
//                 ll orr = a | b ; 
//                 ll andd = a & b ; 
                
                ll sum = setBits(p)   ; 
                bits.push_back(sum)  ; 
           // }
        }
        
        sort(bits.begin(),bits.end())  ;
        
        ll res = 0  ;
        for(ll i=0;i<bits.size();++i){
            ll itr = lower_bound(bits.begin(),bits.end(),k-bits[i])-bits.begin()  ;
            res+=n-itr; 
        }
        return res; 
    }
};