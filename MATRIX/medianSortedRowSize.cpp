// https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1
//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int countLessThanOrEqual(const vector<int>& row, int target) {
    int left = 0, right = row.size() - 1;
    int count = 0;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (row[mid] <= target) {
            count = mid + 1;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return count;
}

int median(vector<vector<int>>& matrix, int R, int C) {
    int minVal = INT_MAX, maxVal = INT_MIN;
    for (int i = 0; i < R; i++) {
        minVal = min(minVal, matrix[i][0]);
        maxVal = max(maxVal, matrix[i][C - 1]);
    }

    int desired = (R * C + 1) / 2;
    
    while (minVal < maxVal) {
        int midVal = minVal + (maxVal - minVal) / 2;
        int count = 0;
        for (int i = 0; i < R; i++) {
            count += countLessThanOrEqual(matrix[i], midVal);
        }

        if (count < desired) {
            minVal = midVal + 1;
        } else {
            maxVal = midVal;
        }
    }

    return minVal;
}

};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        int ans=-1;
        ans=obj.median(matrix, r, c);
        cout<<ans<<"\n";        
    }
    return 0;
}
// } Driver Code Ends
// A good approach but not optimized one
// int n=(R*C)/2;
//         priority_queue<int>q;
//         for(int i=0;i<R;i++)
//         {
//             for(int j=0;j<C;j++)
//             {
//                 q.push(matrix[i][j]);
//                 if(q.size()>n+1)
//                 {
//                     q.pop();
//                 }
//             }
//         }
//         if((R*C)%2==0)
//         {
//             int a=q.top();
//             q.pop();
//             return ((a+q.top())/2);
//         }
//         return q.top();     