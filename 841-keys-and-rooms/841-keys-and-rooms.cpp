class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        int n = rooms.size()  ; 
        vector<int>vis(n+1,0)  ;
        //set<int>st ; 
        int total = 0 ; 
        queue<int>q ; 
        
        q.push(0)  ; 
        vis[0] = 1; 
        while(q.size()){
            
            int t =  q.front()  ; 
            q.pop()  ;
            total++ ; 
            for(auto k : rooms[t]){
                if(vis[k]==0){
                    q.push(k)  ; 
                    vis[k] = 1; 
                }
            }
        }
        
        return total==n; 
    }
};