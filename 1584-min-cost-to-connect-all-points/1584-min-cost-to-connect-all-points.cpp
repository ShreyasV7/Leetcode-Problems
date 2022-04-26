class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        
        int n = points.size()  ; 
        
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>>minHeap ;  
        minHeap.push({0,0})  ; 
        int total_weight=0 ; 
        
        vector<bool>MSTnode(1001,false)  ; 
        int edge = 0 ;  
        
        while(edge<n){
            int currNode = minHeap.top().second ; 
            int currWeight = minHeap.top().first ; 
            minHeap.pop() ;  
            
            if(MSTnode[currNode]) continue; 
            
            MSTnode[currNode]=1 ; 
            total_weight+=currWeight ; 
            edge++ ; 
            
            for(int itr = 0 ; itr<n;itr++){
                if(MSTnode[itr]==false){
                    int weight = abs(points[currNode][0] - points[itr][0]) + abs(points[currNode][1] - points[itr][1])  ; 
                    minHeap.push({weight,itr})  ;
                }
            }
        }
        
        return total_weight;  
    }
};