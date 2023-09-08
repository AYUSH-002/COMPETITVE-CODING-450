// https://www.codingninjas.com/studio/problems/reverse-the-array_1262298?topList=love-babbar-dsa-sheet-problems&utm_source=website&utm_medium=affiliate&utm_campaign=450dsatracker
//code studio
#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr , int m)
{
	reverse(arr.begin()+m+1,arr.end());
}
//GFG
 int n=S.size();
        vector<string>ans;
        string s="";
        for(int i=0;i<n;i++)
        {
            if(S[i]=='.')
            {
                if(ans.size()>0)
                {
                    s+=".";
                    ans.push_back(s);
                    s="";
                }
                else
                {
                ans.push_back(s);
                s="";
                }
            }
            else
            {
                s+=S[i];
            }
        }
        if(s.size()>0 && ans.size()>0)
        {
            s+=".";
            ans.push_back(s);
        }
        else if(s.size()>0 && ans.size()==0)
        {
            ans.push_back(s);
        }
        reverse(ans.begin(),ans.end());
        string anss="";
        for(int i=0;i<ans.size();i++)
        {
            anss+=ans[i];
        }
        return anss; 
