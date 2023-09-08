// https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1
public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      sort(arr,arr+N);
      int count=1;
      int maxCount=0;
      for(int i=0;i<N-1;i++)
      {
          if(arr[i+1]==1+arr[i])
          {
              count++;
          }
          else if(arr[i]!=arr[i+1])
          {
              maxCount=max(maxCount,count);
              count=1;
          }
      }
      maxCount=max(count,maxCount);
      return maxCount;
      
    }