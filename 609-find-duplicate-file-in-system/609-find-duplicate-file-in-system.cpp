class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        
        map<string,vector<string>>mp ;  
        
        for(auto &it : paths){
            stringstream ss(it)  ; 
            string d,f ; 
            getline(ss,d,' ') ; 
            
            while( getline(ss,f,' ')){
                
                string content = f.substr(f.find('(') + 1, f.find(')') - f.find('(')-1)  ; 
                string name = d + '/' + f.substr(0,f.find('('))  ;
                mp[content].push_back(name) ;  
            }
        }
        
        vector<vector<string>>res;  
        
        for(auto &it : mp){
            if(it.second.size() > 1){
                res.push_back(it.second)   ; 
            }
        }
        
        return res; 
    }
};