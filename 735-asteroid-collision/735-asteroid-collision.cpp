class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        
        list<int>ls ; 
        
        int n = ast.size()  ; 
        for(int i=0 ; i < n ; ++i){
            
            if(ast[i]  > 0){
                ls.push_back(ast[i])  ; 
            }
            else{
                
                while(ls.size() > 0 && abs(ast[i]) > ls.back()  && ls.back() > 0 ){
                    ls.pop_back()  ;  
                }
                
                
                
                // if(ls.back() < 0){
                //     ls.push_back(ast[i])  ; 
                // }
                if(ls.empty() || ls.back() < 0){
                    ls.push_back(ast[i])  ; 
                }
                else
                if(ls.back() > 0 && abs(ast[i]) == abs(ls.back())){
                    ls.pop_back()  ; 
                }  
            }
        }
        
        vector<int>res;  
        
        for(auto &it : ls){
            res.push_back(it) ;  
        }
    
        return res ;
    }
};