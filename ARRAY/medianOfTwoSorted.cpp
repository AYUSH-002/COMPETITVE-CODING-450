// https://practice.geeksforgeeks.org/problems/sum-of-middle-elements-of-two-sorted-arrays2305/1
vector<int>ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back(ar1[i]);
            ans.push_back(ar2[i]);
        }
        sort(ans.begin(),ans.end());
        return ans[n-1]+ans[n];