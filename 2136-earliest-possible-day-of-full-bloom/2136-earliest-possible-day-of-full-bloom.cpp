class Solution {
public:
    
    class Function{
        public:
        int BloomDay(vector<int>&plantTime, vector<int>&growTime){
            
            vector<pair<int,int>>vp ; 
            
            int n = plantTime.size()  ; 
            
            for(int i=0;i<n;i++){
                vp.push_back({growTime[i],plantTime[i]})  ; 
            }
            
            sort(vp.begin(),vp.end()) ; 
            
            int sum = 0  ; 
            
            for(auto k : vp){
                sum = max(sum , k.first) + k.second ; 
            }
            return sum ; 
        }
    } ; 
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
       
        Function obj ; 
        return obj.BloomDay(plantTime , growTime) ; 
    }
};