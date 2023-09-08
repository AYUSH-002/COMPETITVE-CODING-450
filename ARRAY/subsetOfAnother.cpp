// https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1
sort(a1,a1+n);
    sort(a2,a2+m);
    int s1=0,s2=0;
    int cnt=0;
    while(s1<n&&s2<m)
    {
       if(a1[s1]==a2[s2])
       {
           s1++;
           s2++;
           cnt++;
       }
       else if(a1[s1]<a2[s2])
       {
           s1++;
       }
       else
    {
        s2++;
    }
    }
    if(cnt!=m)
    {
        return "No";
    }
    else
    {
        return "Yes";
    }