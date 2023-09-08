// https://leetcode.com/problems/find-the-duplicate-number/description/
// //leetcode 287
//Normal
class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        ios::sync_with_stdio(0); cin.tie(0);
        int ans=0;
        unordered_map<int,int>umap;
        for(auto i:nums)
        {
            umap[i]++;
        }
        for(auto x:umap)
        {
            if(x.second>1)
            {
                ans=x.first;
                break;
            }
        }
        return ans; 
    }
};
//optimized version
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL) ;
        int fast = 0;
        int slow = 0;

        while (true){
            fast = nums[nums[fast]];
            slow = nums[slow];
            if(slow == fast){break;}
        }

        fast = 0;
        while(true){
            fast = nums[fast];
            slow = nums[slow];
            if(fast == slow){return slow;}
        }
    }
};
