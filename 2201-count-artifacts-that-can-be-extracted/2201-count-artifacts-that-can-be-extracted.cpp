class Solution {
public:
    int digArtifacts(int n, vector<vector<int>>& artifacts, vector<vector<int>>& dig) {
        
        set<pair<int,int>>st;  
        
        for(auto &it : dig){
            st.insert({it[0] , it[1]})  ; 
        }
        
        int cnt = 0 ;
        
        for(int i=0;i<artifacts.size() ; i++){
            
            int x1 = artifacts[i][0] ;
            int y1 = artifacts[i][1] ;
            int x2 = artifacts[i][2] ;
            int y2 = artifacts[i][3] ;
            
            bool ok = 1 ; 
            for(int j = x1; j<=x2;j++){
                for(int k = y1 ; k<=y2; k++){
                    
                    if(!st.count({j,k})){
                        ok = 0 ;  
                    }
                }
                
                if(ok==0) break ; 
            }
            
            if(ok == 1) cnt++ ; 
        }
        
        return cnt ; 
    }
};