class Solution {
private:
    int Game(int ind, vector<int>&stone, vector<int>&dp){
        if(ind >= stone.size()) return 0 ; 
        
        int ans = INT_MIN ;  
        
        if(dp[ind] != -1) return dp[ind]  ; 
        
        int option1 , option2 , option3 ; 
        
        ans = max(ans,stone[ind] - Game(ind+1,stone,dp))  ; 
        
        if(ind+1 < (int)stone.size())
            ans = max(ans , stone[ind] + stone[ind+1] - Game(ind+2,stone,dp)) ; 
        if(ind+2 < (int)stone.size())
            ans = max(ans,stone[ind] + stone[ind+1] + stone[ind+2] - Game(ind+3,stone,dp))  ; 
        
        return dp[ind] = ans; 
    }
public:
    string stoneGameIII(vector<int>& stone) {
        
        vector<int>dp(696969,-1) ;  
        
        int alice = Game(0,stone,dp)  ;
        
        if(alice > 0) return "Alice"  ; 
        else if(alice < 0) return "Bob"  ; 
        
        return "Tie"  ; 
    }
};