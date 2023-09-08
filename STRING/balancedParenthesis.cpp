// https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        int n=s.size();
        stack<char>ans;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' || s[i]=='['||s[i]=='{')
            {
                ans.push(s[i]);
            }
            else if(s[i]==')' || s[i]==']'||s[i]=='}')
            {
                if(ans.empty()==1)
                {
                    return false;
                }
                if(ans.top()=='(' && s[i]==')')
                {
                    ans.pop();
                }
                else if(ans.top()=='[' && s[i]==']')
                {
                    ans.pop();
                }
                else if(ans.top()=='{' && s[i]=='}')
                {
                    ans.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        if(ans.empty()==1)
        {
            return true;
        }
        return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends