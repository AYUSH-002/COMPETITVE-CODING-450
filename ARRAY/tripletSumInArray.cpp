// https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-15871156
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        sort(A,A+n);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int sum=A[i];
            int l=i+1;
            int r=n-1;
            while(l<r)
            {
                if(sum+A[l]+A[r]==X)
                {
                    return true;
                }
                else if(sum+A[l]+A[r]>X)
                {
                    r--;
                }
                else if(sum+A[l]+A[r]<X)
                {
                    l++;
                }
            }
        }
        return false;
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends