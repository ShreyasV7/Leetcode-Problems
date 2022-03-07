class Solution {
private:
    void dfs(int source,vector<vector<int>>&rooms,vector<bool>&visit, int &totalRooms){
        
        if(visit[source] == true){
            return  ; 
        }
        
        totalRooms++  ; 
        
        visit[source] = true;  
        
        for(auto &keys : rooms[source]){
            dfs(keys,rooms,visit,totalRooms) ;  
        }
    }
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        int totalRooms = 0 ;  
        
        int n = rooms.size()  ; 
        int m = rooms[0].size()  ; 
       
        vector<bool>visit(n+1,false)  ;  
        
        dfs(0,rooms,visit,totalRooms)  ; 
        
        //cout << totalRooms <<"\n" ; 
        if(totalRooms == n) return true; 
        return false;
    }
};