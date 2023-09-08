// https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        vector<int>ans;
        unordered_map<int,int>umap;
        for(auto& i:arr)
        {
            umap[i]++;
        }
        for(auto& x:umap)
        {
            if(x.second>1)
            {
                ans.push_back(x.first);
            }
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<ans.back();i++)
        {
            if(i+1!=arr[i])
            {
                ans.push_back(i+1);
            }
        }
        for(int i=ans.back();i<arr.size();i++)
        {
            if(arr[i]!=i)
            {
                ans.push_back(i);
            }
        }
        if(ans.size()==1)
        {
            ans.push_back(n);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends