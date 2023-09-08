// https://practice.geeksforgeeks.org/problems/split-the-binary-string-into-substrings-with-equal-number-of-0s-and-1s/1
//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str){
        int zero=0;
        int one=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='0')
            {
                zero++;
            }
            if(str[i]=='1')
            {
                one++;
            }
        }
        if(zero!=one)
        {
            return -1;
        }
        int ans=0;
        int ansZ=0;
        int ansO=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='0')
            {
                ansZ++;
            }
            if(str[i]=='1')
            {
                ansO++;
            }
            if(ansZ==ansO)
            {
                ans++;
                ansZ=0;
                ansO=0;
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
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends