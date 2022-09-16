class Solution {
public:
    int sumBase(int n, int k) {
        
        string res=""  ;  
        while(n > 0){
            int rem = n%k ;  
            res+=to_string(rem)  ; 
            n/=k ; 
        }
        
        int total =0  ; 
        for(auto &it : res){
            total+=(it-'0') ;  
        }
        return total ; 
    }
};