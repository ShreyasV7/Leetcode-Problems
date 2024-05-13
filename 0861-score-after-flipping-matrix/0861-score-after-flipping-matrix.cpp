class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        
        for(int i=0;i<grid.size();i++){
            if(grid[i][0] == 0){
               
                for(int j=0;j<grid[i].size();j++){
                    if(grid[i][j] == 0){
                        grid[i][j] = 1;
                    } else {
                        grid[i][j] = 0;
                    }
                }
            }
        }

       
        for(int i=1; i < grid[0].size(); i++){
           
            int count0 = 0;
            int count1 = 0;
            for(int j = 0; j <grid.size();j++ ){
                if(grid[j][i] == 0) count0++; 
                else count1++;
            }
          
            if(count0>count1){
                for(int j = 0; j <grid.size();j++ ){
                    if(grid[j][i] == 0) grid[j][i] = 1; 
                    else grid[j][i] = 0;
                }    
            }
        }        

   
        int ans = 0;
        for(int i=0;i<grid.size();i++){
            int rowSum = 0;
            for(int j=grid[i].size()-1,mul=0 ; j>=0 ;  j--,mul++){
                rowSum += grid[i][j] * pow(2,mul); 
            }
            ans += rowSum; 
        }

        return ans;
    }
};