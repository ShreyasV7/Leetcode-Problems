class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        
        map<int,int>hash;  
        for(auto &it : tops){
            hash[it]++ ; 
        }
        for(auto &it : bottoms){
            hash[it]++ ; 
        }
        
        int mx = 0 , mx1 = 0  ;
        
        for(auto &it : hash){
            if(mx1 < it.second){
                mx1 = it.second;  
                mx = it.first; 
            }
        }
        
        int n=tops.size()  ; 
        for(int i=0;i<n;++i){
            if(tops[i]!=mx && bottoms[i]!=mx){
                return -1; 
            }
        }
        
        int cnt1=0,cnt2=0;
        
        for(int i=0;i<n;i++){
            if(tops[i]!=mx) cnt1++ ; 
            if(bottoms[i]!=mx) cnt2++ ; 
        }
        
        return min(cnt1,cnt2)  ; 
    }
};