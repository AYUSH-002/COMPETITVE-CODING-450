// https://practice.geeksforgeeks.org/problems/min-number-of-flips3210/1
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int minFlips (string s)
{
    int n=s.size();
    char t='0';
    int ans1=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=t)
        {
            ans1++;
        }
        if(t=='0')
        {
            t='1';
        }
        else
        {
            t='0';
        }
    }
    int ans2=0;
    t='1';
    for(int i=0;i<n;i++)
    {
        if(s[i]!=t)
        {
            ans2++;
        }
        if(t=='1')
        {
            t='0';
        }
        else
        {
            t='1';
        }
    }
    return min(ans1,ans2);
}