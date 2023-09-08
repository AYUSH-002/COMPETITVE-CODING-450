// https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        vector<int>ans;
        int index=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==x && ans.size()==0)
            {
                index=i;
                ans.push_back(index);
            }
            else if(arr[i]==x && i>index)
            {
                index=i;
            }
        }
        if(ans.size()==0)
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        ans.push_back(index);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends