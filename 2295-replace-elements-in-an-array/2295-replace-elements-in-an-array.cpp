class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& op) {
        
        map<int,int>mp ; 
        
        for(int i=0;i<nums.size();++i){
            mp[nums[i]] = i ; 
        }
        
        for(int i=0;i<op.size();++i){
            nums[mp[op[i][0]]] = op[i][1]  ; 
            mp[op[i][1]] = mp[op[i][0]]  ; 
        }
        return nums ;
    }
};