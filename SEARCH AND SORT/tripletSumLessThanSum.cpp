// https://practice.geeksforgeeks.org/problems/count-triplets-with-sum-smaller-than-x5549/1
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	long long countTriplets(long long num[], int n, long long sum)
	{
	    long long ans=0;
        sort(num, num+n);
        int i, j, k;
        for (i = 0; i < n - 2; i++) 
        {
            j = i+1;
            k = n-1;
            long long int target=sum-num[i];
            while (j < k) 
            {
                int sum1 =num[j] + num[k];
                if(sum1<target)
                {
                    ans+=k-j;
                    j++;
                }
                else if(sum1>=target)
                {
                    k--;
                }
                
            }
        }
        return ans;
	}
		 

};

//{ Driver Code Starts.

int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends