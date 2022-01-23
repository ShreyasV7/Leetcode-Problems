class Solution {
public:
    
    void dfs(int high, int low, int i, int num ,vector<int>&res){
        
        //cout << num <<" "<<i <<"\n"  ; 
        if(num > high) return ; 
        if(i > 10) return ; 
        if(num>=low && num<=high){
            res.push_back(num)  ;
        }
       
        dfs(high, low,i+1,num*10+i,res) ; 
        
    }
    vector<int> sequentialDigits(int low, int high) {
        
        vector<int>res; 
        for(int i=1;i<=9;++i){
            dfs(high,low,i,0,res)  ; 
        }
        sort(res.begin(),res.end()) ; 
        return res ;
    }
};