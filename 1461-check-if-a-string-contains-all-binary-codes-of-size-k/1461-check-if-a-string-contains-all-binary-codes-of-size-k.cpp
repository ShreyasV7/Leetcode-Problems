class Solution {
public:
    bool hasAllCodes(string s, int k) {
        
        set<string>st;  
        
        long long int f  = 1ll<<k ; 
        
        long long int n = s.size()  ;
        for(int i=0;i<=n-k;++i){
            st.insert(s.substr(i,k)) ; 
        }
        
        if(st.size()==f) return 1;  
        return 0 ; 
    }
};