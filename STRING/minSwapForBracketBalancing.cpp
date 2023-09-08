// https://practice.geeksforgeeks.org/problems/minimum-swaps-for-bracket-balancing2704/1
//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int minimumNumberOfSwaps(string s){
        int ans=0;
        int ex=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='[')
            {
                if(ex>0)
                {
                    ans+=ex;
                }
                ex--;
            }
            else if(s[i]==']')
            {
                ex++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.minimumNumberOfSwaps(S) << endl;
    }
    return 0; 
} 
// } Driver Code Ends