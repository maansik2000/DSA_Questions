#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        set<char> ans;
        bool isSub = false;

        if (s.size() == 0)
        {
            return true;
        }

        for (int i = 0; i < t.size(); i++)
        {
            ans.insert(t[i]);
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (ans.find(s[i]) != ans.end())
            {
                isSub = true;
            }
            else
            {
                isSub = false;
                break;
            }
        }

        return isSub;
    }
};