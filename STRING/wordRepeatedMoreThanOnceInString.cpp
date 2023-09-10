#include <bits/stdc++.h>
using namespace std;

vector<string> findDuplicateWords(string &str)
{
    int n = str.size();
    vector<string> dict;
    vector<string> res;
    unordered_map<string, int> umap;
    string word = "";

    for (int i = 0; i < n; i++)
    {
        if (str[i] != ' ' && str[i] != '\0')
        { 
            word += str[i];
        }
        else if (str[i] == ' ' || str[i] == '\0')
        {
            dict.push_back(word);
            word = "";
        }
    }
    if (!word.empty())
    {
        dict.push_back(word);
    }
    for (auto &it : dict)
    {
        umap[it]++;
    }

    for (auto &x : umap)
    {
        if (x.second > 1)
        {
            res.push_back(x.first);
        }
    }

    return res;
}

int main()
{
    string input;
    getline(cin, input);
    vector<string> duplicates = findDuplicateWords(input);

    for (auto &x : duplicates)
    {
        cout << x << " ";
    }

    return 0;
}
