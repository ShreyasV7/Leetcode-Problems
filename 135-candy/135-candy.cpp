class Solution {
public:
    int candy(vector<int>& ratings) {
    
        vector<int>candies; 
        int total=0 ; 
        int n = ratings.size()  ;
        vector<int>prefix(n,1) , suffix(n,1)  ;
        
        for(int i=1;i<n;++i){
            if(ratings[i] > ratings[i-1]){
                prefix[i]=prefix[i-1]+1;
            }
        }
        
        for(int i=n-2;i>=0;i--){
            if(ratings[i] > ratings[i+1]){
                suffix[i]=suffix[i+1]+1; 
            }
        }
        
        for(int i=0;i<n;i++){
            total+=max(prefix[i],suffix[i])  ;
        }
        return total ; 
    }
};