#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      unordered_set<int> hset;
        // Traverse all the elements through the loop...
        for(int idx = 0; idx < nums.size(); idx++) {
            // Searches set. if present, it contains duplicate...
            if(hset.count(nums[idx]))
                return true;
            // insert nums[i] in set...
            hset.insert(nums[idx]);
        }
        return false;
    }
};