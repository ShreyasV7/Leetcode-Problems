class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        
        int n = graph.size()  ; 
        
        
        
        int comb = (1<<n)-1;  
        
        set<pair<int,int>>visit;  
        
        queue<pair<pair<int,int>,int>>q;  
        
        
        for(int bit = 0 ; bit < n ; bit++){
            int mask = (1<<bit)  ; 
            q.push({{bit,mask},1})  ; 
            visit.insert({bit,mask})  ; 
        }
        
        while(q.size() > 0){
            
            auto curr = q.front()  ; 
            q.pop()  ; 
            
            int currNode = curr.first.first;  
            int currMask = curr.first.second ; 
            int dist = curr.second ; 
          
            for(auto &child : graph[currNode]){
                
                int newMask = currMask | (1<<child)  ; 
                
                if(visit.count({child, newMask})) continue; 
                else 
                if(newMask == comb){
                    return dist;  
                }
                else{
                    
                    q.push({{child, newMask} , dist+1})  ; 
                    visit.insert({child,newMask})  ; 
                }
            }
        }
        
        return 0 ;
    }
};