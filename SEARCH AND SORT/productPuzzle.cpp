// https://practice.geeksforgeeks.org/problems/product-array-puzzle4525/1
//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) 
    {
        vector<long long int>res(n);
        for(int i=0;i<n;i++)
        {
            res[i]=nums[i];
        }
        for(int i=1;i<n;i++)
        {
            res[i]*=res[i-1];
        }
        long long int ans=res[n-1];
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                long long int b=1;
                for(int j=0;j<i;j++)
                {
                    b*=nums[j];
                }
                for(int j=i+1;j<n;j++)
                {
                    b*=nums[j];
                }
                res[i]=(b);
            }
            else
            {
                res[i]=(ans/nums[i]);
            }
        }
        return res;
    }
};


//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends