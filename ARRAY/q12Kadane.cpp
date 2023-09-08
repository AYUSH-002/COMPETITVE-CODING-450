https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
long long maxSubarraySum(int array[], int n){
        
        long long int maxSum =INT_MIN;
        long long int currSum =0;
        for(int i = 0; i < n; i++)
        {
            currSum+=array[i];
            maxSum=max(currSum,maxSum);
            if(currSum<0)
            {
                currSum=0;
            }
            
        }
        return maxSum;
    }