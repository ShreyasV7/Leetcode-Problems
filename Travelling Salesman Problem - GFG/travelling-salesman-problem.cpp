// { Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
public:
int dp[11][1<<11];

int f(int i, int mask, vector<vector<int>> &cost) {
   
    if(mask == 1 ) return dp[i][0] = cost[i][0]   ; 
    if(dp[i][mask] != -1) return dp[i][mask];
    
    int curAns = INT_MAX;
    for(int j = 1; j <= (int)cost.size(); j++) {
        if((mask & (1 << j))) {
            curAns = min(curAns, cost[i][j] + f(j, mask ^ (1 << j), cost));
        }
    }
    return dp[i][mask] = curAns;
    
}

int total_cost(vector<vector<int>>cost){
    memset(dp, -1, sizeof(dp));
    int n = cost.size();
    int current_mask = (1 << n) - 1;

    return f(0, current_mask, cost);
    
}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>cost(n, vector<int>(n, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)cin >> cost[i][j];
		Solution obj;
		int ans = obj.total_cost(cost);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends