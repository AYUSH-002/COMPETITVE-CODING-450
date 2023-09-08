// https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1
class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        unordered_map<int,int>umap;
        int count=0;
        for(int i=0;i<n;i++)
        {
            count+=umap[k-arr[i]];
            umap[arr[i]]++;
        }
        return count;
    }
};