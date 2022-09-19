class Solution {
public:
    int getKth(int lo, int hi, int k) {
        
        vector<pair<int,int>>vp ; 
        
        for(int i=lo ; i<=hi; ++i){
            
            int curr =i ;  
            int steps = 0 ; 
            while(curr!=1){
                if((curr & 1)){
                    curr = 3*curr+1; 
                }
                else{
                    curr/=2 ; 
                }
                steps++ ; 
            }
            
            vp.push_back({steps,i}) ; 
        }
        
        sort(vp.begin(),vp.end())  ; 
        
        return vp[k-1].second;  
        
        // t.c = O(nlogn)
        // s.c = O(n+2)
    }
};