class Solution {
public:
    
    class Pattern{
        
        public:
        
        bool patternMatching(string &pattern , string &s){
            
            int len_s = s.length() ;
            
            vector<string>newPattern ; 
            
            string temp ="" ; 
            
            for(int index = 0 ; index < len_s ; index++){
                
                if(s[index] == ' '){
                    newPattern.push_back(temp) ; 
                    temp="" ; 
                }
                else{
                    temp.push_back(s[index]) ; 
                }
            }
            
            newPattern.push_back(temp)  ; 
            
            
            map<char,int>map_pattern ; 
            map<string,int>map_newPattern  ; 
            
            for(string itr : newPattern){
                map_newPattern[itr]++ ; 
            }
            
            for(char itr : pattern){
                map_pattern[itr]++ ;  
            }
            
            if(map_pattern.size() != map_newPattern.size()){
                return false ;  
            }
            
            for(int index = 1 ; index<(int)newPattern.size(); index++){
                if((pattern[index]!=pattern[index-1] && newPattern[index]==newPattern[index-1]) || (pattern[index]==pattern[index-1] && newPattern[index]!=newPattern[index-1])){
                    return false; 
                }
            }
            
            return true; 
            
        }
        
    } ; 
    bool wordPattern(string pattern, string s) {
       
        Pattern obj ; 
        return obj.patternMatching(pattern,s)  ; 
    }
};