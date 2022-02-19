typedef long long ll ; 
class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
       
        if(finalSum % 2 != 0) return {}  ; 
        
        ll cnt=0,i=2; 
        
        vector<ll>ans ; 
        while((cnt+i) <= finalSum){
            ans.push_back(i)  ; 
            cnt+=i;  
            i+=2; 
        }
        
        ll n = ans.size()  ; 
        ans[n-1] = ans[n-1] + (finalSum-cnt)  ; 
        return ans; 
    }
};