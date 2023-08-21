// https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1
long long count=0;
    
     void merge(long long arr[], long long l, long long m, long long r)
    {
         long long i=l;
         long long j=m+1;
         long long k=l;
         
         
         long long b[r+1];
         
         while(i<=m && j<=r)
         {
             if(arr[i]<=arr[j])
             {
                 b[k]=arr[i];
                 k++;
                 i++;
             }
             else{
                 count+=(m-i+1);
                 b[k]=arr[j];
                 
                 k++;
                 j++;
                 
             }
          }
          
          while(i<=m)
          {
              b[k]=arr[i];
              k++;
              i++;
          }
          while(j<=r)
          {
              b[k]=arr[j];
              k++;
              j++;
          }
          for(int j=l;j<=r;j++)
          {
              arr[j]=b[j];
          }
    }
    void mergeSort(long long arr[], long long l, long long r)
    {
        
        
        //if(l>=r)return;
        if(l<r){
            long long m=(l+r)/2;
            
            mergeSort(arr,l,m);
            mergeSort(arr,m+1,r);
            merge(arr,l,m,r);
        }    
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        long long l=0;
        long long r=N-1;
        
        mergeSort(arr,l,r);
        return count;
    }