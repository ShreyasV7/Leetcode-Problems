// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	vector<int>SolveQueris(string str, vector<vector<int>>Query){
	    
	    vector<int>res ; 
	    
	    for(int i=0;i<Query.size();i ++){
	        
	        int f1 = Query[i][0]  ; 
	        int f2 = Query[i][1]  ; 
	        
	        set<char>st;
	        f1-- ; f2-- ; 
	        for(int j = f1 ; j<=f2; j++){
	            st.insert(str[j])  ; 
	        }
	        
	        
	        int m = st.size() ;  
	        
	        res.push_back(m)  ; 
	    }
	    
	    return res;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		int q;
		cin >> q;
		vector<vector<int>>Query;
		for(int i = 0; i < q; i++){
			int l, r;
			cin >> l >> r;
			Query.push_back({l, r});
		}
		Solution obj;
		vector<int> ans = obj.SolveQueris(str, Query);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends