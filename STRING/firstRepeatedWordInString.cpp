// https://www.geeksforgeeks.org/find-first-repeated-word-string/
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    string ans="";
    unordered_map<char,int>umap;
    for(int i=0;i<s.size();i++)
    {
        if(umap.find(s[i])!=umap.end())
        {
            ans+=s[i];
            break;
        }
        umap[s[i]]++;
    }
    if(ans.size()>0)
    {
    return ans;
    }
    return "-1";
}