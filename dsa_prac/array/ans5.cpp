// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
     vector <int> duplicates(int arr[], int n) {
       sort(arr,arr+n);
       vector <int> vec;
       unordered_set <int> duplicate;
       for(int i=0;i<n-1;i++){
           if(arr[i]==arr[i+1]){
             if(duplicate.find(arr[i])==duplicate.end())
               duplicate.insert(arr[i]);
           }
       }
       for(auto it=duplicate.begin();it!=duplicate.end();it++){
           vec.insert(vec.begin(),*it);
       }
       sort(vec.begin(),vec.end());
       if(vec.size()==0){
           vec.push_back(-1);
       }
       return vec;
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends