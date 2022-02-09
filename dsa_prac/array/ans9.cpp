// { Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends

class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
       unordered_set<int> num;
       unordered_set<int> dupnum;
       for(int i=0;i<n;i++){
           if( num.find(arr[i])==num.end()){
               num.insert(arr[i]);
           }else{
               dupnum.insert(arr[i]);
           }
       }
       
        for(int i=0;i<n;i++){
           if( dupnum.find(arr[i])==dupnum.end()){
               return arr[i];
           }
       }
       return 0;
    } 
  
};


// { Driver Code Starts.

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.firstNonRepeating(arr,n)<<endl;
    }
}
  // } Driver Code Ends