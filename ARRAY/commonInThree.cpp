// https://practice.geeksforgeeks.org/problems/common-elements1132/1
set<int>A1;
            set<int>B1;
            set<int>C1;
            for(int i=0;i<n1;i++)
            {
                A1.insert(A[i]);
            }
            for(int i=0;i<n2;i++)
            {
                B1.insert(B[i]);
            }
            for(int i=0;i<n3;i++)
            {
                C1.insert(C[i]);
            }
            vector<int>ans;
            unordered_map<int,int>umap;
            for(auto& i:A1)
            {
                umap[i]++;
            }
            for(auto& i:B1)
            {
                umap[i]++;
            }
            for(auto& i:C1)
            {
                umap[i]++;
            }
            for(auto x:umap)
            {
                if(x.second>=3)
                {
                    ans.push_back(x.first);
                }
            }
            sort(ans.begin(),ans.end());
            return ans;