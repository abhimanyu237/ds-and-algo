// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C+
class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
      unordered_multiset<int> epair;
      int cout=0,p;
      for(int i=0;i<n;i++){
          p=k-arr[i];
          if(p>0){
              cout=cout+epair.count(p);
              epair.insert(arr[i]);
          }
      }
      return cout;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}  // } Driver Code Ends