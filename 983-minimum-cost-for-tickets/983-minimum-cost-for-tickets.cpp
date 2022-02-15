class Solution {
private:
    int minimumCost(vector<int>&days, vector<int>&costs, int ind,int nextDay,vector<int>&data){
        if(ind >= days.size())
            return 0 ; 
        
         if(days[ind] < nextDay)
            return  minimumCost(days,costs,ind+1,nextDay,data)  ;
        
        if(data[ind]!=-1) return data[ind]  ; 
        
        int mn1 = costs[0]+minimumCost(days,costs,ind+1,days[ind]+1,data)  ; 
        int mn2 = costs[1]+minimumCost(days,costs,ind+1,days[ind]+7,data)  ; 
        int mn3 = costs[2]+minimumCost(days,costs,ind+1,days[ind]+30,data)  ; 
        
        return data[ind] = min(mn1,min(mn2,mn3))  ; 
    }
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        
        int n = days.size()  ;
        vector<int>data(366,-1)  ; 
        
        int ans = minimumCost(days,costs,0,0,data)  ; 
        return ans; 
    }
};