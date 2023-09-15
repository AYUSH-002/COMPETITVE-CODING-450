// https://practice.geeksforgeeks.org/problems/zero-sum-subarrays1825/1
//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
        long long int ans=0,preSum=0,sum=0;
        unordered_map<long long int,long long int>umap;
        for(int i=0;i<n;i++)
        {
            preSum+=arr[i];
            if(preSum==0)
            {
                ans++;
            }
            umap[preSum]++;
        }
        for(auto& x:umap)
        {
            ans+=((x.second)*(x.second-1))/2;
        }
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
        int n;
        cin>>n; //input size of array
       
        vector<long long int> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}
// } Driver Code Ends