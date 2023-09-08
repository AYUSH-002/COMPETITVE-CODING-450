// https://practice.geeksforgeeks.org/problems/find-pair-given-difference1559/1
//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends


bool findPair(int arr[], int size, int n)
{
    map<int,int>ans;
    for(int i=0;i<size;i++)
    {
        ans[arr[i]]++;
    }
    if(n==0)
    {
        if(ans.size()==size)
        {
            return false;
        }
        return true;
    }
    for(int i=0;i<size;i++)
    {
        if(ans.find(arr[i]+n)!=ans.end())
        {
            return true;
        }
    }
    return false;
}