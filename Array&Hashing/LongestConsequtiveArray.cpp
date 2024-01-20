#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
     if (arr.size() == 0) {
            return 0;
        }
    int n = arr.size(), max_ = 0, count = 0;

    set<int> temp;
    vector<int> store;

    for(int i=0;i<n;i++){
        temp.insert(arr[i]);
    }

    for(auto item: temp){
        store.push_back(item);
    }

    for(int i=1;i<store.size();i++){
        if(store[i] == store[i-1] + 1){
            count++;
        }else{
            count=0;
        }
        max_ = max(max_, count);
    }

    return max_ + 1;

    }
};