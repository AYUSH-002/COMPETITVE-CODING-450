// https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) 
	{
	   long long maxProd=INT_MIN;
	   long long currProd=1;
	   for(int i=0;i<n;i++)
	   {
	       currProd*=arr[i];
	       maxProd=max(currProd,maxProd);
	       if(arr[i]==0)
	       {
	           currProd=1;
	       }
	   }
	   currProd=1;
	   for(int i=n-1;i>=0;i--)
	   {
	       currProd*=arr[i];
	       maxProd=max(currProd,maxProd);
	       if(arr[i]==0)
	       {
	           currProd=1;
	       }
	   }
	   return maxProd;
	   
	}