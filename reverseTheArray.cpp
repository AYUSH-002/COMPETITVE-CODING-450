// https://www.codingninjas.com/studio/problems/reverse-the-array_1262298?topList=love-babbar-dsa-sheet-problems&utm_source=website&utm_medium=affiliate&utm_campaign=450dsatracker
#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr , int m)
{
	reverse(arr.begin()+m+1,arr.end());
}