// https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1
//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int n, int m) 
    {
        if(matrix.empty())
        {
            return{};
        }
        vector<int> ans;
        // int n=matrix.size();
        // int m=matrix[0].size();
        int r=0,c=0,ro=n-1,co=m-1;
        while(ans.size()<m*n)
        {
            for(int i=c;i<=co && ans.size()<m*n ;i++)
            {
                ans.push_back(matrix[r][i]);
            }
            for(int j=r+1;j<=ro-1 &&ans.size()<m*n;j++)
            {
                ans.push_back(matrix[j][co]);
            }
            for(int i=co;i>=c && ans.size()<m*n ;i--)
            {
                ans.push_back(matrix[ro][i]);
            }
            for(int j=ro-1;j>=r+1 &&ans.size()<m*n;j--)
            {
                ans.push_back(matrix[j][c]);
            }
            r++,++c,ro--,co--;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends