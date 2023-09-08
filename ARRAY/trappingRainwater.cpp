// https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1
public:
    long long trappingWater(int arr[], int n){
        
        long long ans=0;
        int l=0;
        int r=n-1;
        int lMax=0;
        int rMax=0;
        while(l<r)
        {
            if(arr[l]>lMax)
            {
                lMax=arr[l];
            }
            if(arr[r]>rMax)
            {
                rMax=arr[r];
            }
            if(lMax<rMax)
            {
                ans+=max(0,lMax-arr[l]);
                l++;
            }
            else
            {
                ans+=max(0,rMax-arr[r]);
                r--;
            }
        }
        return ans;
        
    }