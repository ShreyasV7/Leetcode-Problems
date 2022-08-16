class Solution {
public:
     static bool cmp (const vector<int>&a , const vector<int>&b){
        return a[0] == b[0] ? a[1] > b[1] : a[0] < b[0]  ; 
    }
//     int f(int prev,int i , vector<vector<int>>&e, int n){
//         if(i>=n) return  0 ;  
        
//         int m1 = 0 , m2 = 0  ; 
//         if(prev==-1 || e[prev][0] < e[i][0] && e[prev][1] < e[i][1]){
//             m1 = 1+f(i,i+1,e,n)  ; 
//         }
//         m2 = f(prev,i+1,e,n)  ; 
        
//         return max(m1,m2)  ; 
//     }
    int maxEnvelopes(vector<vector<int>>& e) {
        
        int n = e.size()  ; 
        sort(e.begin(),e.end(),cmp)  ; 
        
        vector<int>res;  
        
        for(int i=0;i<n;++i){
            int element = e[i][1] ;
            int idx = lower_bound(res.begin(),res.end(),element) - res.begin() ;  
            if(idx >= res.size()) res.push_back(element)  ;  
            else res[idx] = element;  
        }
        return res.size()  ; 
    }
};