class Solution {
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        
    int r = grid1.size();
    int c = grid1[0].size();
    
    const int dx[4] = {0,1,-1,0};
    
    const int dy[4] = {1,0,0,-1};
    
    vector<vector<bool>> visited(r,vector<bool>(c,false));
    
    for(int i=0;i<r;i++){
        
        for(int j=0;j<c;j++){
            
            if(grid1[i][j]==1){
                
                if(visited[i][j]){
                    continue;
                }
                
                queue<pair<int,int>>q;
                
                q.push({i,j});
                
                visited[i][j] = true;
                
                while(!q.empty()){
                    
                    auto f = q.front();
                    
                    q.pop();
                    
                    int x = f.first;
                    
                    int y = f.second;
                    
                    for(int i=0;i<4;i++){
                        
                        int newx = x + dx[i];
                        
                        int newy = y + dy[i];
                        
                        if(newx<0 || newx>=r || newy<0 || newy>=c){
                            continue;
                        }
                        
                        else if(visited[newx][newy]){
                            continue;
                        }
                        
                        else if(grid1[newx][newy]==1){
                            
                            q.push({newx,newy});
                            visited[newx][newy] = true;
                        }
                    }
                }
            }
            
        }
    }
    
    int ans=0;
    
    vector<vector<bool>> visited2(r,vector<bool>(c,false));
    
    for(int i=0;i<r;i++){
        
        for(int j=0;j<c;j++){
            
            if(grid2[i][j]==1){
                
                if(visited2[i][j]){
                    continue;
                }
                
                if(visited[i][j]){

                queue<pair<int,int>>q;
                
                q.push({i,j});
                
                visited2[i][j] = true;
                    
                bool check = true;
                
                while(!q.empty()){
                    
                    auto f = q.front();
                    
                    q.pop();
                    
                    int x = f.first;
                    
                    int y = f.second;
                    
                    for(int i=0;i<4;i++){
                        
                        int newx = x + dx[i];
                        
                        int newy = y + dy[i];
                        
                        if(newx<0 || newx>=r || newy<0 || newy>=c){
                            continue;
                        }
                        
                        else if(visited2[newx][newy]){
                            continue;
                        }
                        
                        else if(grid2[newx][newy]==1){
                            
                            if(visited[newx][newy]){
                                q.push({newx,newy});
                                visited2[newx][newy] = true;
                            }
                            
                            else{
                                check=false;
                            }
                            
                        }
                        
                    }
                    
                    
                }
                    
                if(check){
                    ans++;
                }
            }
        }
    }
    }
    
    return ans;

    }
};