class Solution {
public:
    int countLatticePoints(vector<vector<int>>& circles) {
        set<pair<int,int>>st; 
        int f = circles.size()  ; 
        for(int k = 0 ; k<f; ++k){
            
            int xi = circles[k][0] ; 
            int yi = circles[k][1]  ; 
            int ri = circles[k][2]  ; 
            
            for(int a=-ri; a<=ri; a++){
                for(int b=-ri; b<=ri;b++){
                    
                    if(a*a+b*b<=ri*ri){
                        st.insert({xi+a,yi+b})  ; 
                    }
                }
            }
        }
        
        return (int)st.size()  ; 
    }
};