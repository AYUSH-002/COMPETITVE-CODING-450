// https://www.spoj.com/problems/ANARC05B/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int p= 0; p< t; p++)
    {
        int i, j, k;
        int n1, n2;
        int result1, result2, result;
        cin >> n1;
        result = result1 = result2 = 0;
        vector<int> a(n1);
        for (i = 0; i < n1; i++)
        {
            cin >> a[i];
        }

        j = 0;
        cin >> n2;
        vector<int> b(n2);
        for (i = 0; i < n2; i++)
        {
            cin >> b[i];
            result2 += b[i];

            while (j < n1 && a[j] < b[i])
            {
                result1 += a[j];
                j++;
            }

            if (j < n1 && a[j] == b[i])
            {
                result1 += a[j];
                result += max(result1, result2);
                result1 = 0;
                result2 = 0;
                j++;
            }
        }

        while (j < n1)
        {
            result1 += a[j];
            j++;
        }
        result += max(result1, result2);
        cout<<result<<endl;
    }
}