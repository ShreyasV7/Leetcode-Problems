// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


int chocolates(int arr[], int n);


int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        
        cout << chocolates(arr, n);
        cout << endl;
        
    }

}
// } Driver Code Ends

int chocolates(int arr[], int n)
{
    deque<int>dq;  
    for(int i=0;i<n;i++){
        dq.push_back(arr[i])   ; 
    }
    
    while(dq.size()!=1){
        if(dq.back()>dq.front()){
            dq.pop_back()  ;
        }
        else{
            dq.pop_front()  ; 
        }
    }
    
    return dq.front()   ; 
}
