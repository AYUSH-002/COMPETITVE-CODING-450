// //leetcode 229
// https://leetcode.com/problems/majority-element-ii/description/
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        ios::sync_with_stdio(0); cin.tie(0);
        vector<int>ans;
        int n=nums.size();
        unordered_map<int,int>umap;
        for(int i=0;i<n;i++)
        {
            umap[nums[i]]++;
        }
        for(auto x:umap)
        {
            if(x.second>n/3)
            {
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};