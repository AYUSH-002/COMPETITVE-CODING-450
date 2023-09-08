// https://www.codingninjas.com/studio/problems/move-all-negative-numbers-to-beginning-and-positive-to-end_1112620?topList=love-babbar-dsa-sheet-problems&utm_source=website&utm_medium=affiliate&utm_campaign=450dsatracker&leftPanelTab=1
#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    // ios::sync_with_stdio(0); cin.tie(0);
    // sort(nums.begin(),nums.end());
    // return nums;
    ios::sync_with_stdio(0); cin.tie(0);
    int l=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]<0)
        {
            swap(nums[l],nums[i]);
            l++;
        }
    }
    return nums;
}
void segregateElements(int nums[],int n)
    {
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>=0)
            {
                pos.push_back(nums[i]);
            }
            else
            {
                neg.push_back(nums[i]);
            }
        }
        int index=0;
        for(int i=0;i<pos.size();i++)
        {
            nums[i]=pos[i];
            index++;
        }
        for(int i=0;i<neg.size();i++)
        {
            nums[index]=neg[i];
            index++;
        }
    }