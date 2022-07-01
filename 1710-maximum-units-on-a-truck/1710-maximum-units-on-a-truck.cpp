class Solution {
public:
    static bool cmp(vector<int>&x,vector<int>&y){
        return y[1] < x[1]  ; 
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        sort(boxTypes.begin(),boxTypes.end(),cmp)  ;
        int len = boxTypes.size()  ; 
        int totalUnits = 0  , index = 0  ; 
        while(index < len && truckSize ){
            if(boxTypes[index][0] ){
               boxTypes[index][0]-=1 ; 
               totalUnits+=boxTypes[index][1]  ; 
               truckSize-- ; 
            }
            else
                index++ ; 
        }
        return totalUnits ; 
    }
};