class Solution {
public:
    int calPoints(vector<string>& ops) {
        
        list<int>res;  
        
        int n=ops.size()  ; 
        
        for(int i = 0 ; i < n ; i++){
            if(ops[i]=="D"){
                res.push_back(2*res.back())  ; 
            }
            else if(ops[i]=="+"){
                auto it = res.end()  ; 
                it--;
                int sum = *it ; 
                it-- ; 
                sum+=(*it)  ; 
                res.push_back(sum) ; 
            }
            else if(ops[i]=="C"){
                res.pop_back() ; 
            }
            else{
                res.push_back(stoi(ops[i])) ; 
            }
            
            
        }

        int sum = 0 ; 
        for(auto j : res){
            sum+=j; 
        }
        return sum ; 
    }
};