class Solution {
private:
    int highestScore(vector<pair<int,int>>&vp, int index, int maximumAge, vector<vector<int>>&dp){
        
       if(index >= vp.size()) return 0 ; 
       
        if(dp[index][maximumAge] != -1) return dp[index][maximumAge]  ; 
        
        if(maximumAge <= vp[index].second){
            
            int option1 = highestScore(vp,index+1,maximumAge,dp)   ; 
            int option2 = vp[index].first + highestScore(vp,index+1,vp[index].second,dp) ;
            return max(option1,option2)  ; 
        }
        
        return dp[index][maximumAge] = highestScore(vp,index+1, maximumAge,dp)  ; 
    }
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        
        vector<pair<int,int>>vp ; 
        
        for(int i=0;i<scores.size();i++){
            vp.push_back({scores[i], ages[i]})  ; 
        }
        
        vector<vector<int>>dp(1007,vector<int>(1007,-1))  ; 
        
        sort(vp.begin(),vp.end())  ; 
        
        int n=scores.size()-1 ; 
        int result = highestScore(vp,0,0,dp)  ; 
        return result; 
    }
};