class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges){
        
        vector<pair<int,pair<int,int>>>vp(n)   ;
        
        vp[0]={0,{0,0}}  ; 
        for(int i=1 ; i < n ; i++){
            vp[i].first = i  ; 
            vp[i].second.first = INT_MAX;
            vp[i].second.second = INT_MAX;
        }
        
        
        vector<int>red[n+1]  ; 
        vector<int>blue[n+1]  ;  
        
        for(int i=0;i<redEdges.size();i++){
            red[redEdges[i][0]].push_back(redEdges[i][1])  ; 
            //red[redEdges[i][1]].push_back(redEdges[i][0])  ; 
        }
        
        for(int i=0;i<blueEdges.size();i++){
            blue[blueEdges[i][0]].push_back(blueEdges[i][1])  ; 
           // blue[blueEdges[i][1]].push_back(blueEdges[i][0])  ; 
        }
        
        queue<pair<int,int>>q ; 
        q.push({0,-1})  ; //blue
        q.push({0,1})  ; //red
        
        int currDist = 0  ; 
        while(q.size() > 0){
            
            int sz = q.size()   ;
            
            for(int i=0;i<sz;++i){
                
                
               int currNode = q.front().first;  
               int color = q.front().second;  
            
               q.pop()  ;
                
               if(color == -1){
                   
                   for(auto &child : red[currNode]){
                       
                       if(vp[child].second.first > currDist+1){
                           vp[child].second.first = currDist+1 ; 
                           //cout << vp[child].second.first <<"\n"  ; 
                           q.push({child,1})  ; 
                       }
                   }
               }
               else{
                   for(auto &child : blue[currNode]){
                       
                       if(vp[child].second.second > currDist+1){
                           vp[child].second.second = currDist+1 ; 
                           q.push({child,-1})  ; 
                       }
                   }
               }
               
            }
                currDist++  ;
        }
        
        vector<int>ans;
        //ans.push_back(min(vp[0].second.first, vp[0].second.second))  ;
        
        // for(auto &it : vp){
        //     cout << it.second.first <<" "<< it.second.second <<"\n"  ; 
        // }
        for(int i=0;i<(int)vp.size();i++){
            int k = min(vp[i].second.first, vp[i].second.second)  ; 
            if(k == INT_MAX)
                ans.push_back(-1) ; 
            else
               ans.push_back(k)  ;
        }
        return ans ; 
    }
};