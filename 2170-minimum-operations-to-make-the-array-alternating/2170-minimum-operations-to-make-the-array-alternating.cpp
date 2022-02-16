class Solution {
public:
    int minimumOperations(vector<int>& nums) {

        unordered_map<int, int>meven, modd;
        int n = nums.size() ;
        if (n <= 1) return  0  ;
        for (int i = 0; i < n; i++) {
            if (i % 2 ) {
                modd[nums[i]]++ ;
            }
            else {
                meven[nums[i]]++ ;
            }
        }


        priority_queue<pair<int, int>>even , odd;

        for (auto &it : meven) {
            even.push({it.second, it.first})  ;
        }

        for (auto &it : modd) {
            odd.push({it.second, it.first})  ;
        }

        if (odd.top().second != even.top().second) return n - odd.top().first - even.top().first  ;
        else {
            
            int mxe = even.top().first;  
            int mxo = odd.top().first ; 
            
            odd.pop() ; even.pop() ; 
            
            int ev = (even.empty()) ? 0: even.top().first ; 
            int od = (odd.empty()) ? 0: odd.top().first ; 
            
            return n-max(ev+mxo , od+mxe)  ; 
        }
    }
};