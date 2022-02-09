// { Driver Code Starts
//Initial Template for C

#include <stdio.h>

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

 // } Driver Code Ends
//User function Template for C

//Function to sort an array using quick sort algorithm.
int partition (int arr[], int low, int high)
{
   int pe=arr[high];
   int i=low-1;
   int j=low;
   for(int p=j;j<high;j++){
       if(arr[j]<pe){
           i++;
           int x=arr[i];
           arr[i]=arr[j];
           arr[j]=x;
       }
   }
       int x=arr[i+1];
           arr[i+1]=arr[j];
           arr[j]=x;
   
   return i+1;
}
void quickSort(int arr[], int low, int high)
{
    if(low<high){
        int pe=partition(arr,low,high);
        quickSort(arr,low,pe-1);
        quickSort(arr,pe+1,high);
    }

}
    

// { Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends