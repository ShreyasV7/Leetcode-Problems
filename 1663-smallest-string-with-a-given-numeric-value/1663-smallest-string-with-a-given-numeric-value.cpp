class Solution {
public:
    string getSmallestString(int n, int k) {
        
        vector<int>res(n); 
        
        for(int i = 0 ; i < n ; i++) res[i] = 0  ;
        
        k = k - n ; 
        
        for(int i=n-1;i>=0;i--){
            
            res[i] = min(25,k)  ; 
            k-=res[i]  ; 
        }
        
        // for(auto it : res){
        //     cout << it <<" "  ;  
        // }
        
        string p=""  ;
        
        for(int i=0;i<res.size();i++){
            
            char m = 'a'+res[i]  ;
            p+=m;  
        }
        
        sort(p.begin(),p.end())  ; 
        return p ; 
    }
};