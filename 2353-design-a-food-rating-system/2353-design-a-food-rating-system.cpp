struct shreyas{
         bool operator() (const pair<int,string> a,const pair<int,string> b) const {
          if(a.first!=b.first) return a.first>b.first;
          else return a.second<b.second;
        //return false;
    }
} ; 
    

class FoodRatings {
public:
    
    map<string,set<pair<int,string>,shreyas>>mpc  ;
    map<string,string>fc ;
    map<string,int>fr ; 
    
      FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings){
        
        for(int i=0;i<foods.size();i++){
            mpc[cuisines[i]].insert({ratings[i],foods[i]})  ; 
            fc[foods[i]] = cuisines[i]  ;
            fr[foods[i]] = ratings[i]  ; 
        }
    }
    
    void changeRating(string food, int newRating) {
        string curr_cusine = fc[food]  ; 
        pair<int,string> itr  = {fr[food], food} ; 
        
        mpc[curr_cusine].erase(itr)  ; 
        mpc[curr_cusine].insert({newRating,food})  ; 
        fr[food] = newRating ; 
    }
    
    string highestRated(string cuisine) {
       
        auto itr = mpc[cuisine].begin()  ; 
        return itr->second ;
        return ""  ;
    }
    
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */