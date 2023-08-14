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