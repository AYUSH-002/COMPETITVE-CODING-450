// https://leetcode.com/problems/reverse-string/description/
class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        // int l=0;
        // int r=s.size()-1;
        // while(l<r)
        // {
        //     swap(s[l++],s[r--]);
        // }
        // int n=s.size();
        // for(int i=0;i<n/2;i++)
        // {
        //     swap(s[i],s[n-1-i]);
        // }
        reverse(s.begin(),s.end());
    }
};