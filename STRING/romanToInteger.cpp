// https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int romanToDecimal(string &str) {
       int sum=0;
       int n=str.length();
       map<char, int>roman= {{'I', 1}, {'V', 5},{'X', 10},{'L', 50},{'C', 100},{'D', 500},
        {'M', 1000}};
        for(int i=0;i<n;i++)
        {
            if(roman[str[i+1]]<=roman[str[i]])
            {
                sum+=roman[str[i]];
            }
            else
            {
                sum-=roman[str[i]];
            }
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends