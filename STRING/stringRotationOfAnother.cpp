// https://www.geeksforgeeks.org/a-program-to-check-if-strings-are-rotations-of-each-other/
#include <bits/stdc++.h>
using namespace std;
 
bool check_rotation(string s, string goal)
{
    if(s.size()!=goal.size())
    {
        return false;
    }
    queue<char>p,q;
    for(int i=0;i<s.size();i++)
    {
        p.push(s[i]);
        q.push(goal[i]);
    }
    int k = goal.size();
    while(k--)
    {
        char ch=p.front();
        p.pop();
        p.push(ch);
        if(p==q)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    string str1 = "ABCD", str2 = "ACBD";
 
    if (check_rotation(str1, str2))
        printf("Strings are rotations of each other");
    else
        printf("Strings are not rotations of each other");
    return 0;
}