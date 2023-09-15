// https://practice.geeksforgeeks.org/problems/find-all-four-sum-numbers1732/1
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &nums, int target) 
    {
        int n=nums.size();
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            continue;
            for(int j=i+1;j<n;j++)
            {
                if(j>i+1 && nums[j]==nums[j-1])
                continue;
                int p=j+1;
                int q=n-1;
                while(p<q)
                {
                    long long sum=nums[i];
                    sum+=nums[j];
                    sum+=nums[p];
                    sum+=nums[q];
                    if(sum==target)
                    {
                        vector<int>a;
                        a.push_back(nums[i]);
                        a.push_back(nums[j]);
                        a.push_back(nums[p]);
                        a.push_back(nums[q]);
                        res.push_back(a);
                        p++;
                        q--;
                        while(p<q && nums[p]==nums[p-1])
                            p++;
                        while(p<q && nums[q]==nums[q+1])
                            q--;
                    }
                    else if(sum>target)
                    {
                        q--;
                    }
                    else
                    {
                        p++;
                    }
                }
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends