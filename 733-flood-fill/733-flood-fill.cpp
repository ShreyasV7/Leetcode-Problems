class Solution {
private:
    void dfs(vector<vector<int>>&image, int sr, int sc, int newColor, int n, int m, int color ){
    
        
        if(sr < 0 || sr >= n || sc >= m || sc < 0 || image[sr][sc] != color) return  ; 
        
        image[sr][sc] = newColor ; 
        
            dfs(image,sr+1,sc,newColor,n,m,color)  ; 
 
            dfs(image,sr,sc+1,newColor,n,m,color)  ; 
               
            dfs(image,sr-1,sc,newColor,n,m,color)  ; 
        
            dfs(image,sr,sc-1,newColor,n,m,color)  ; 
        
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int n=image.size()   ; 
        int m=image[0].size()  ;
        
        if(image[sr][sc] == newColor )  return image ; 
    
        
        dfs(image,sr,sc,newColor,n,m, image[sr][sc])   ; 
        
        return image; 
    }
};