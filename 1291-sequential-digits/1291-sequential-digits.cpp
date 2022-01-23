class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        
        queue<int>q; 
        
        for(int i=1;i<=9;++i){
            q.push(i) ; 
        }
        
        vector<int>res; 
        while(q.size() > 0){
            int t = q.front() ; 
            q.pop() ; 
            if(t > high) break ; 
            if(t >= low && t<=high){
                res.push_back(t)  ; 
            }
            
            int r = t % 10 ; 
            int num = t*10 + r+1; 
            if(r < 9) q.push(num) ;  
        }
        sort(res.begin(),res.end()) ; 
        return res ;
    }
};