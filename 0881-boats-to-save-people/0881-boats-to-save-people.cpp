class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
       
        sort(people.begin() , people.end());

        int i=0 , res=0 , j=people.size()-1;

        while(i<=j){
            if(people[i]+people[j]<=limit){
                i++;
                j--;
                res++;
            }
            else{
                res++;
                j--;
            }
        }

        return res;
    }
};