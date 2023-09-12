//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int low, int mid, int high)
    {
         int l1=mid-low+1;
    int l2=high-mid;
    int arr1[l1],arr2[l2];
    for(int i=0;i<l1;i++)
    {
        arr1[i]=arr[low+i];
    }
    for(int j=0;j<l2;j++)
    {
        arr2[j]=arr[j+1+mid];
    }
    int i=0,j=0,k=low;
    while(i<l1 && j<l2)
    {
        if(arr1[i]<arr2[j])
        {
            arr[k]=arr1[i];
            i++;       
        }
        else
        {
            arr[k]=arr2[j];
            j++;
        }
        k++;
    }
     while (i < l1) {
        arr[k] = arr1[i];
        i++;
        k++;
    }

    while (j < l2) {
        arr[k] = arr2[j];
        j++;
        k++;
    }
    }
    public:
    void mergeSort(int arr[], int low, int high)
    {
        if(low<high)
    {
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);    }
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends