// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


vector<int> Smallestonleft(int arr[], int n);


int main() {
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n;
	    cin >> n;
	    int arr[n+1];
	    
	    for(int i=0;i<n;i++){
	        cin>> arr[i];
	    }
	    
	    vector<int> b;
	    b = Smallestonleft(arr, n);
	    for(int i=0;i<n;i++)
	        cout << b[i] << " ";
	       
	    cout << endl;
	    
	    
	}
	
	return 0;
}// } Driver Code Ends


vector<int> Smallestonleft(int arr[], int n)
{
    
    vector<int>res(n)  ; 
    set<int>st ; 
    
    st.insert(arr[0])  ; 
    res[0] = -1  ; 
    
    for(int i=1 ;i <n ; i++){
        
        st.insert(arr[i])  ;  
        
        auto k = st.find(arr[i])  ; 
        
        if(k==st.begin()) res[i] = -1 ; 
        else {
            k-- ; 
            res[i] = *k ; 
        }
    }
    
    return res; 
  
}