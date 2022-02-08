class Solution {
public:
      vector<vector<int>>v{{4,6},{6,8},{7,9},{4,8},{0,3,9},{},{0,1,7},{2,6},{1,3},{2,4}};
      
    int dp[10][5001];
    int mod=1000000007;
    
    int recurs(int i,int n)
    {
     
        if(n<=0)
        {
         return 1;
        }
        
        if(v[i].size()==0)
        {
            return 0;
        }
        
        if(dp[i][n]!=-1)
        {
            return dp[i][n];
        }
        
        
       int sum=0;
        
        for(auto x:v[i])
        {
           sum=(sum+recurs(x,n-1))%mod;
        }
        
        return dp[i][n]=sum%mod;
        
    }
    
    
    
    int knightDialer(int n) {
        
      for(int i=0;i<10;i++)
      {
          for(int j=0;j<=n;j++)
          {
              dp[i][j]=-1;
          }
      }
        
        
        
        
        int sum=0;
        for(int i=0;i<=9;i++)
        {
            sum=(sum+recurs(i,n-1))%mod;
        }
        return sum%mod;

    }
};