// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

typedef pair<double,int> vi ; 
class Solution
{
    
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        priority_queue<vi>pq ; 
        
        double res = 0.00 ;  
        
        for(int i = 0 ; i < n ; i++){
            
            double k1 = (double)arr[i].value/(double)arr[i].weight ;
            int k2 = arr[i].weight;  
            
            pq.push({k1,k2}) ; 
        }
        
        while( pq.size() > 0){
            
            double f = min(W,pq.top().second)  ; 
            res+=f*pq.top().first;  
            W-=f ;
            pq.pop()  ;
            
            if(W<=0) return res ;
        }
        
        return res;
    }
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends