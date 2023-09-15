// https://practice.geeksforgeeks.org/problems/minimum-swaps/1
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    vector<int>res=nums;
	    int n=nums.size();
	    int ans=0;
	    unordered_map<int,int>umap;
	    sort(res.begin(),res.end());
	    for(int i=0;i<n;i++)
	    {
	        umap[nums[i]]=i;
	    }
	    int i=0;
	    while(i<n)
	    {
	        if(res[i]!=nums[i])
	        {
	            ans++;
	            int p=res[i],q=nums[i];
	            swap(nums[i],nums[umap[res[i]]]);
	            swap(umap[q],umap[p]);
	        }
	        i++;
	    }
	    return ans;
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends