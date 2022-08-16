class Solution {
public:
    typedef long long int ll ; 
    int edgeScore(vector<int>& e) {
        
        ll n = e.size()  ; 
        ll node =0 , mx = -1 ; 
        vector<ll>vec(n+1,0)  ; 
        for(ll i=0;i<n;i++){
            vec[e[i]]+=i ; 
        }
        
        for(ll i=0;i<=n;i++){
            if(mx < vec[i]){
                mx = vec[i]  ; 
                node = i ; 
            }
        }
        
        return node; 
    }
};