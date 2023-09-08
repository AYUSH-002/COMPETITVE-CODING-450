#include <bits/stdc++.h>
using namespace std; 
#define N 4
void rotate90Clockwise(int arr[N][N])
{
    vector<vector<int>>ans;
    for (int j = 0; j < N; j++)
    {
        vector<int>a;
        for (int i = N - 1; i >= 0; i--)
        {
            a.push_back(arr[i][j]);
        }
        ans.push_back(a);
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
 
// Driver code
int main()
{
    int arr[N][N] = { { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 } };
    rotate90Clockwise(arr);
    return 0;
}