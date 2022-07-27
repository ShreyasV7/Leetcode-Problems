class Solution {
public:
    int dp[301][100][100] ; 
    map<char,pair<int,int>>mp ; 
    void createHash(){
        
        char c = 'A' ; 
        bool f = 0 ; 
        for(int i=0;i<=5;i++){
            for(int j=0;j<=5;j++){
                mp[c]={i,j}  ;
                c++ ; 
                if(c > 'Z'){
                    f = 1; 
                    break ; 
                }
            }
            if(f) break ; 
        }
        
    }
    
    int helper(int i, string &word, char pf1, char pf2){
        if(i>=word.size()) return dp[i][pf1][pf2] = 0 ; 
        
        if(dp[i][pf1][pf2]!=-1) return dp[i][pf1][pf2];
        //cout << i <<" "<< pf1 <<" "<< pf2 <<"\n"  ; 
        int x1 = mp[word[i]].first; 
        int y1 = mp[word[i]].second;  
        
        int x2 = mp[pf1].first ; 
        int y2 = mp[pf1].second;  
        
        int cost = abs(x1-x2)+abs(y1-y2)+helper(i+1,word,word[i],pf2)  ; 
        if(pf2=='3'){
            cost = min(cost,helper(i+1,word,pf1,word[i]))  ; 
        }
        else{
            x2 = mp[pf2].first;  
            y2 = mp[pf2].second ; 
            int k = abs(x1-x2)+abs(y1-y2) ; 
            cost = min(cost,k+helper(i+1,word,pf1,word[i]))  ; 
        }
        return dp[i][pf1][pf2]=cost; 
    }
    int minimumDistance(string word) {
        
        createHash()  ; 
        // for(auto it : mp){
        //     cout << it.first <<" "<< it.second.first <<" "<< it.second.second <<"\n"  ;
        // }
        memset(dp,-1,sizeof(dp))  ;
        
        int ans = helper(1,word,word[0],'3')  ; 
        
        return ans;  
    }
};