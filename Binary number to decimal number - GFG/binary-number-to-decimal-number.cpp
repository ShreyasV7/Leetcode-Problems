// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
		int binary_to_decimal(string str)
		{
		    // Code here.
		    
		    reverse(str.begin(),str.end())  ; 
		    int n = str.length()  ;
		    
		    int num = 0  ; 
		    int k = 0  ;
		    for(int i=0 ; i < n; i++){
		        num+=pow(2,k)*(str[i]-'0')  ; 
		        k++ ;  
		    }
		    return num ;
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	string str;
    	cin >> str;
    	Solution ob;
    	int  ans = ob.binary_to_decimal(str);
    	cout << ans <<"\n";
    }
	return 0;
}  // } Driver Code Ends