// https://leetcode.com/problems/search-a-2d-matrix/description/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        // int n=matrix.size();
        // int m=matrix[0].size();
        // bool ans=false;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         if(matrix[i][j]==target)
        //         {
        //             ans=true;
        //         }
        //     }
        // } 
        // return ans; 
        int i=0,j=matrix[0].size()-1;
        while(i<matrix.size() && j>=0)
        {
            if(matrix[i][j]==target)
            {
                return true;
            }
            else if(matrix[i][j]>target)
            {
                j--;
            }
            else if(matrix[i][j]<target)
            {
                i++;
            }
        }  
        return false; 
        
    }
};