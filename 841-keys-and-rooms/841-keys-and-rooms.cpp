class Solution {
private : 
    bool TraversingRooms(vector<vector<int>>&rooms){
        int n = rooms.size()  ; 
        vector<bool>visit(n+1,false)  ; 
        
        queue<int>data;  
        data.push(0)  ; 
        visit[0]=true;  
        
        int totalRooms = 0  ; 
        while(!data.empty()){
            
            auto currRoom = data.front()  ; 
            data.pop() ; 
            totalRooms++ ;
            int sizeOfcurrRoom = rooms[currRoom].size()  ; 
            for(int i=0;i<sizeOfcurrRoom;++i){
                if(visit[rooms[currRoom][i]] == false){
                    
                    data.push(rooms[currRoom][i])  ; 
                    
                    visit[rooms[currRoom][i]] = true ;
                }
            }
        }
        
        return totalRooms==n ; 
    }
public: 
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
          
        bool ans = TraversingRooms(rooms)  ; 
        
        return ans ;
        
       
    }
};