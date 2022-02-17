class Solution {
public:
    typedef long long int ll ; 
    long long minimumRemoval(vector<int>& beans) {
        ll n = beans.size()  ; 
        
        vector<ll>temp ;  
        //vector<ll>poss ; 
        ll total = 0 ; 
        for(ll i = 0 ; i<n; i++){
             temp.push_back(beans[i])  ; 
             total+=beans[i]  ; 
        }
        
        ll mn = LONG_MAX;  
        sort(temp.rbegin(),temp.rend()) ;
        
        for(ll i = 0 ; i<n ; i++){
            
            ll madeBeans = temp[i] * (i+1)  ; 
            ll removed = total - madeBeans ; 
            
            mn = min(mn,removed)  ; 
        }
        
        return mn ; 
    }
};