// https://practice.geeksforgeeks.org/problems/maximum-difference-between-pair-in-a-matrix/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int findMaxValue(vector<vector<int>>&mat, int N)
    {
        int R=INT_MIN;
        int x;
        for(int i=1;i<N;i++)
        {
            mat[0][i]=min(mat[0][i],mat[0][i-1]);
            mat[i][0]=min(mat[i][0],mat[i-1][0]);
        }
        for(int i=1;i<N;i++)
        {
            for(int j=1;j<N;j++)
            {
                x=mat[i][j];
                mat[i][j]=min(x,min(mat[i-1][j],mat[i][j-1]));
                R=max(R,x-mat[i-1][j-1]);
            }
        }
        return R;
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
	    cin >> n;
	    vector<vector<int>>mat(n,vector<int>(n, 0));
	    for(int i = 0; i < n; i++){
	        for(int j = 0; j < n; j++){
	            cin >> mat[i][j];
	        }
	    }
	    Solution ob;
	    int ans = ob.findMaxValue(mat, n);
	    cout << ans <<endl;
	}
	return 0;
}

// } Driver Code Ends