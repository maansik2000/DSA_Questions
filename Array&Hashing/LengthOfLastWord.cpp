#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0, i = s.size()-1;
        while(i>=0 && s[i] == ' '){
            i--;
        }

        while(i>=0 && s[i] != ' '){
            count++;
            i--;
        }

        return count;
    }
};