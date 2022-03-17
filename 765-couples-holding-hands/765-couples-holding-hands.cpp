class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
        
        int n = row.size()  ; 
    
        unordered_map<int,int>mp2;  
        for(int i=0;i<n;i+=2){
            mp2[row[i]] = row[i+1] ;
            mp2[row[i+1]] = row[i] ;
        }
        
        
        int cnt=0 ; 
        
        for(int i=0;i<n;i+=2){
            
            if(mp2[i]!=i+1){
                cnt++ ; 
                int f1 = mp2[i+1]  ; 
                int f2 = mp2[i]  ; 
                mp2[f1] = f2 ; 
                mp2[f2] = f1 ; 
            }
        }
        
        return cnt; 
    }
};