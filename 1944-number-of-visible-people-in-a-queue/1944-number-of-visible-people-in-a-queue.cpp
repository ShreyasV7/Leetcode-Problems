class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& h) {
        list<int>ls ; 
        int n = h.size()  ; 
        vector<int>v; 
        
       // v.push_back(0)  ; 
       // ls.push_back(h[0]) ; 
        
        for(int i=n-1;i>=0;i--){
            int cnt=0  ; 
            while(ls.size() > 0 && ls.back() < h[i]){
                cnt++ ;
                ls.pop_back()  ; 
            }
            
            if(ls.size() > 0 )cnt++ ;  
            
            v.push_back(cnt)  ; 
            
            ls.push_back(h[i])  ;
            
        }
        
        reverse(v.begin(),v.end())  ; 
        return v; 
    
    }
};