// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


vector<int> reaching_height(int n, int a[]) ;

int main() {
	int t;
	cin >> t;
	while (t-- > 0) {
	    int n; 
	    cin >> n;
	    int a[n];
	    for (int i = 0; i < n; i++) 
	        cin >> a[i];
	    vector<int> v;
	    v = reaching_height(n,a);
	
	    if(v.size()==1 and v[0] == -1){
	        cout << "Not Possible\n";
	    }
	    else{
	    for(int i:v)
	        cout << i << " ";
	    cout << endl;}
	    
	}
	return 0;
}// } Driver Code Ends


//User function Template for C++

vector<int> reaching_height(int n, int a[]) {
    vector<int>res(n); 
    sort(a,a+n)  ; 
    int j = n-1; 
    for(int i=0;i<n;i+=2){
        res[i] = a[j] ; 
        j--  ;
    }
    
    if(n%2){
        
       for(int i=n-2;i>=1;i-=2){
           res[i]=a[j]  ;
           j-- ; 
        }
    }
    else{
        for(int i=n-1;i>=1;i-=2){
            res[i] = a[j]  ;
            j-- ; 
        }
    }
    
    int up=0,down=0 ; 
    
    for(int i=0;i<n;i+=2) up+=res[i] ; 
    for(int i=1;i<n;i+=2) down+=res[i]  ;
    
    if(up<=down){
        return {-1} ; 
    }
    
    return res ;
}
