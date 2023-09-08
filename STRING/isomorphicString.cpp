// https://practice.geeksforgeeks.org/problems/isomorphic-strings-1587115620/1
//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
       int n1=str1.size();
       int n2=str2.size();
       if(n1!=n2)
       {
           return false;
       }
       int res1[256]={0};
       int res2[256]={0};
       for(int i=0;i<n1;i++)
       {
           res1[str1[i]]=res1[str1[i]]+i+1;
           res2[str2[i]]=res2[str2[i]]+i+1;
       }
       for(int i=0;i<n1;i++)
       {
           if(res1[str1[i]]!=res2[str2[i]])
           {
               return false;
           }
       }
       return true;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends