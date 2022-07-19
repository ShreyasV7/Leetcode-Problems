class Solution {
public:
    
//     int dp[105][105][105]   ; 
    int func(int i, int j,vector<int>&boxes,int cnt,vector<vector<vector<int>>>&dp){
        if(i>j) dp[i][j][cnt] =  0  ; 
        
        // while(i+1<=j && boxes[i]==boxes[i+1]){
        //     i++ ; 
        //     cnt++ ; 
        // }
        
        if(dp[i][j][cnt]!=-1) return dp[i][j][cnt] ; 
        
        int sum1 = ((cnt+1)*(cnt+1)) + func(i+1,j,boxes,0,dp)  ;
        int sum2 = 0  ;
        for(int z = i+1 ; z<=j; z++){
            if(boxes[i]==boxes[z]){
                int sum  = func(i+1,z-1,boxes,0,dp) +  func(z,j,boxes,cnt+1,dp)   ; 
                sum2 = max(sum,sum2)  ; 
            }
        }
        
        return  dp[i][j][cnt] = max(sum1,sum2)  ; 
    }
    int removeBoxes(vector<int>& boxes){ 
        int n = boxes.size()  ; 
//         for(int i=0;i<105;i++){
//             for(int j=0;j<105;j++){
//                 for(int k=0;k<105;k++){
                    
//                     dp[i][j][k]  =  -1; 
//                 }
//             }
//         }
        vector<vector<vector<int>>>dp(130, vector<vector<int>>(130, vector<int>(130, -1)));
        int res = func(0,n-1,boxes,0,dp)  ; 
        return res;  
    }
};