// https://www.codingninjas.com/studio/problems/sort-0-1-2_631055?topList=love-babbar-dsa-sheet-problems&utm_source=website&utm_medium=affiliate&utm_campaign=450dsatracker
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int index0=0;
   int index1=0;
   for(int i=0;i<n;i++)
   {
      if(arr[i]==0)
      {
         swap(arr[index0],arr[i]);
         index0++;
      }
   }
   index1=index0;
   for(int i=0;i<n;i++)
   {
      if(arr[i]==1)
      {
         swap(arr[index1],arr[i]);
         index1++;
      }
   }
}