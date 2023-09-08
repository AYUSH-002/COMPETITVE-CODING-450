https://www.codingninjas.com/studio/problems/sum-of-max-and-min_1081476?topList=love-babbar-dsa-sheet-problems&utm_source=website&utm_medium=affiliate&utm_campaign=450dsatracker&leftPanelTab=1
//code studio
#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
	int maxi=INT_MIN;
	int mini=INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>maxi)
		{
			maxi=arr[i];
		}
		if(arr[i]<mini)
		{
			mini=arr[i];
		}
	}
	return mini+maxi;
}
//GFG
pair<long long, long long> getMinMax(long long a[], int n) 
{
    pair<int,int>ans;
    long long int maxi=INT_MIN;
    long long int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]>maxi)
        {
            maxi=a[i];
        }
        if(a[i]<mini)
        {
            mini=a[i];
        }
    }
    ans.first=mini;
    ans.second=maxi;
    return ans;
    
}