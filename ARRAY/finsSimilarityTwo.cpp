https://www.codingninjas.com/studio/problems/find-similarities-between-two-arrays_1229070?topList=love-babbar-dsa-sheet-problems&utm_source=website&utm_medium=affiliate&utm_campaign=450dsatracker&leftPanelTab=1
#include <bits/stdc++.h> 
pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
	ios::sync_with_stdio(0); cin.tie(0);
	set<int>ans;
	for(int i=0;i<n;i++)
	{
		ans.insert(arr1[i]);
	}
	for(int i=0;i<m;i++)
	{
		ans.insert(arr2[i]);
	}
	int a=(n+m)-ans.size();
	int b=ans.size();
	pair<int,int>aa;
	aa.first=a;
	aa.second=b;
	return aa;
}