// https://www.geeksforgeeks.org/checking-valid-shuffle-of-two-strings/
#include <bits/stdc++.h>
using namespace std;

bool validShuffle(string str1, string str2, string shuffle)
{
    int n1 = str1.size();
    int n2 = str2.size();
    int n3 = shuffle.size();
    vector<char> s1;
    vector<char> s2;
    vector<char> s3;
    
    for (int i = 0; i < n1; i++)
    {
        s1.push_back(str1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        s2.push_back(str2[i]);
    }
    for (int i = 0; i < n3; i++)
    {
        s3.push_back(shuffle[i]);
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    sort(s3.begin(), s3.end());

    int index = 0;
    for (int i = 0; i < n1; i++)
    {
        if (s1[i] == s3[index])
        {
            index++;
        }
        index++;
    }
    for (int i = 0; i < n2; i++)
    {
        if (s2[i] == s3[index])
        {
            index++;
        }
    }
    if (index == n3)
    {
        return true;
    }
    return false;
}

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    bool ans = validShuffle(s1, s2, s3);
    cout << ans << endl;
    return 0;
}
