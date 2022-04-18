class Solution {
public:
    long long dp[1000005];
    int nextpos(vector<vector<int>>& rides , int val , int idx )
    {
        int l=idx;
        int h=rides.size()-1;
        int pos=h+1;
        
        while(l<=h)
        {
            int mid=(l+(h-l)/2);
            
            if(rides[mid][0]>=val)
            {
                pos=mid;
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        
        return pos;
    }
    long long func( vector<vector<int>>& rides , int i , int n )
    {
        if(i>=n)
        {
            return 0;
        }
        
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        long long val1;
        
        val1=func(rides , i+1 , n);
        
        int idx=nextpos(rides , rides[i][1] , i);
        
       long long val2= (long long)(rides[i][1]-rides[i][0] + rides[i][2] )+ (long long)func(rides , idx , n );
        
        return dp[i]= max(val1 , val2);
    }

    long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
        memset(dp , -1  , sizeof(dp));
        sort(rides.begin(),rides.end());
        return func(rides , 0 , rides.size());
        
    }
};