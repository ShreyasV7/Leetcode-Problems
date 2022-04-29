class Solution {
public:
    double average(vector<int>& salary) {
        
        double mx = *max_element(salary.begin(),salary.end())  ; 
        double mn = *min_element(salary.begin(),salary.end())  ; 
        
        double sum = 0.0 ; 
        int p = 0  ;
        for(int i = 0 ; i < salary.size() ; i++){
            if(salary[i]==mx || salary[i]==mn) continue;  
            else{
                sum+=salary[i]  ; 
                p++ ; 
            } 
        }
        return sum/p; 
    }
};