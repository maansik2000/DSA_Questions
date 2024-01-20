#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &arr)
    {
        map<string, vector<string>> mpp;
        for (auto x : arr)
        {
            string word = x;

            sort(word.begin(), word.end());

            mpp[word].push_back(x);
        }

        vector<vector<string>> ans;

        for (auto x : mpp)
        {
            ans.push_back(x.second);
        }

        return ans;
    }
};