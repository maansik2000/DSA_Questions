#include <bits/stdc++.h>
using namespace std;

bool cmpfunc(const pair <int, int> &a, const pair <int, int> &b) {
    return a.second > b.second;
}

class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            vector<int> result;
            vector <pair< int, int>> vec;
            unordered_map <int, int> map;
            int count = 0;
            for (auto i : nums) {
                if (map.find(i) != map.end()) {++map[i];}
                else {map[i] = 1;}
            }
            for (auto j : map) {
                vec.push_back(j);
            }
            sort(vec.begin(), vec.end(), cmpfunc);
            for (auto iter = vec.begin(); iter != vec.end() && count != k; iter++) {
                result.push_back(iter->first);
                count++;
            }
            return result;
        }
};