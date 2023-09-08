//https://leetcode.com/problems/minimum-size-subarray-sum/
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        int n=nums.size();
        int sum=0;
        int ans=INT_MAX;
        for(int l=0,r=0;r<n;r++)
        {
            sum+=nums[r];
            while(sum>=target)
            {
                ans=min(r-l+1,ans);
                sum-=nums[l++];
                cout<<sum<<" ";
            }
        }
        if(ans<INT_MAX)
        {
            return ans;
        }
        return 0;
    }
};