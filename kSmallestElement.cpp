// https://www.codingninjas.com/studio/problems/kth-smallest-and-largest-element-of-array_1115488?topList=love-babbar-dsa-sheet-problems&utm_source=website&utm_medium=affiliate&utm_campaign=450dsatracker&leftPanelTab=1
#include <bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	int kSmall=0;
	int kLarge=0;
	sort(arr.begin(),arr.end());
	int i=n-k;
	int j=k-1;
	vector<int>ans;
	ans.push_back(arr[j]);
	ans.push_back(arr[i]);
	return ans;

// class Solution{
//     public:
//     // arr : given array
//     // l : starting index of the array i.e 0
//     // r : ending index of the array i.e size-1
//     // k : find kth smallest element and return using this function
//     int kthSmallest(int arr[], int l, int r, int k) 
//     {
//         quickSort(arr,l,r);
//         return arr[k-1];
//     }
//     private:
//     int partition(int arr[], int low, int high)
// {
//     // Choosing the pivot
//     int pivot = arr[high];
//     int i = (low - 1);
 
//     for (int j = low; j <= high - 1; j++) {
//         if (arr[j] < pivot) {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i + 1], arr[high]);
//     return (i + 1);
// }
// void quickSort(int arr[], int low, int high)
// {
//     if (low < high) {
//         int pi = partition(arr, low, high);
//         quickSort(arr, low, pi - 1);
//         quickSort(arr, pi + 1, high);
//     }
// }
// };