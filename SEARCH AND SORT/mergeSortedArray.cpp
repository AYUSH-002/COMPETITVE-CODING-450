// https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            int i=n-1;
            int j=0;
            while(i>=0 && j<m)
            {
                if(arr1[i]>arr2[j])
                {
                    swap(arr1[i],arr2[j]);
                    i--;
                    j++;
                }
                else
                {
                    break;
                }
            }
            //isme else break ki jagah ek mei j++ bhi daal sakte hai koi farak nahi padega udhar se hata do
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
        } 
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends