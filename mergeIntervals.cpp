https://leetcode.com/problems/merge-intervals/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) 
    {
        //ans.back()[1] means the last elements first index we have to check
        ios::sync_with_stdio(0); cin.tie(0);
        int n=inter.size();
        vector<vector<int>> ans;
        sort(inter.begin(),inter.end());
        for(int i=0;i<n;i++)
        {
            if(ans.empty()||inter[i][0]>ans.back()[1])
            {
                ans.push_back(inter[i]);
            }
            else
            {
                ans.back()[1]=max(ans.back()[1],inter[i][1]);
            }
        }
        return ans;
    }
};