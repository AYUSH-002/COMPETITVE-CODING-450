// https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		vector<string>find_permutation(string s)
		{
		    vector<string>res;
		    set<string>ans;
		    int n=s.size();
		    permutation(s,ans,0,n-1);
		    for(auto& a:ans)
		    {
		        res.push_back(a);
		    }
		    sort(res.begin(),res.end());
		    return res;
		}
		void permutation(string &s,set<string>&ans,int l,int r)
		{
		    if(l>=s.size())
		    {
		        ans.insert(s);
		        return;
		    }
		    for(int i=l;i<=r;i++)
		    {
		        swap(s[i],s[l]);
		        permutation(s,ans,l+1,r);
		        swap(s[i],s[l]);
		    }
		}
		
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends