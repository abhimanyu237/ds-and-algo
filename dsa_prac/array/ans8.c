// { Driver Code Starts
// Initial Template for C

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


 // } Driver Code Ends
// User function Template for C
#include <math.h>
int firstRepeated(int *arr, int n) {
    int arr1[1000001];
    for(int i=0;i<=1000000;i++){
        arr1[i]=-1;
        }
        int x=n;
    for(int i=0;i<n;i++){
        if(arr1[arr[i]]==-1){
            arr1[arr[i]]=i;
        }else{
                  if(x>arr1[arr[i]])
                   x=arr1[arr[i]];
              }
            
        }
    
    if(x<n)
    return x+1;
    else
    return -1;
}


// { Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int *arr;
        arr = (int *)malloc(n * sizeof(int));

        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

        printf("%d\n", firstRepeated(arr, n));
    }
    return 0;
}  // } Driver Code Ends