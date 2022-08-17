class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        int n1 = nums.size()  ; 
        
        set<int>st ; 
        for(int i=0;i<n1;i++){
            st.insert(nums[i])  ; 
        }
        nums.clear() ; 
        for(auto j : st){
            nums.push_back(j)  ; 
        }
        sort(nums.begin(),nums.end())  ; 
        int n = nums.size()  ;
        int mn = INT_MAX;
        for(int i=0;i<n;i++){
            
            int endNum = nums[i]+n1-1 ; 
            int endind = upper_bound(nums.begin(),nums.end(),endNum)-nums.begin() ;  
            int startind = i ; 
            int rest = n1-endind+startind; 
            mn = min(mn,rest)  ; 
           // cout << i <<" "<< mn <<" "<< endNum <<" "<< endind <<" "<< startind <<" "<< rest <<"\n"  ;
        }
        
        if(mn == INT_MAX) return 0  ;
        return mn ; 
    }
};