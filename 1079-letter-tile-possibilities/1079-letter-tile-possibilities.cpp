class Solution {
private:
    void func(string tiles, string res, map<int,int>&mp, set<string>&st){
        
        st.insert(res)  ; 
        
        for(int i=0 ; i<tiles.size(); i++){
            
            if(mp[i]==1){
                continue;  
            }
    
            mp[i] = 1; 
            res+=tiles[i]  ; 
            func(tiles,res,mp,st) ; 
            res.pop_back()  ; 
            mp[i] = 0 ; 
            
        }
    }
public:
    int numTilePossibilities(string tiles) {
        
        map<int,int>mp ; 
        set<string>st; 
        
        string res=""   ; 
        
        for(int i=0; i<tiles.size() ; ++i){
            mp[i]=0  ; 
        }
        
        func(tiles, res , mp, st) ; 
        
        return (int)st.size()-1 ; 
    }
};