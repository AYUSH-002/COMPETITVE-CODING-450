class Solution{
public:

	void rearrange(int arr[], int n) {
	   vector<int>pos;
	   vector<int>neg;
	   for(int i=0;i<n;i++)
	   {
	       if(arr[i]>=0)
	       {
	           pos.push_back(arr[i]);
	       }
	       if(arr[i]<0)
	       {
	           neg.push_back(arr[i]);
	       }
	   }
	   reverse(pos.begin(),pos.end());
	   reverse(neg.begin(),neg.end());
	   int a=2*min(neg.size(),pos.size());
	   for(int i=0;i<a;i++)
	   {
	       if(i%2==0 && pos.size()>0)
	       {
	           //int n1=pos.size();
	           arr[i]=pos.back();
	           pos.pop_back();
	       }
	       if(i%2==1 && neg.size()>0)
	       {
	           //int n2=neg.size();
	           arr[i]=neg.back();
	           neg.pop_back();
	       }    
	   }
	   if(neg.size()>0)
	       {
	           while(neg.size()>0 && a<n)
	           {
	               arr[a]=neg.back();
	               neg.pop_back();
	               a++;
	           }
	       }
	   if(pos.size()>0)
	       {
	           while(pos.size()>0 && a<n)
	           {
	               arr[a]=pos.back();
	               pos.pop_back();
	               a++;
	           }
	       }
	}
};