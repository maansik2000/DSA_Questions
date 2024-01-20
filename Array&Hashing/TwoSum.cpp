#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int sum) {
    vector<int> res, store;
    store = arr;

    sort(store.begin(), store.end());

    int left = 0, right = arr.size()-1;
    int n1, n2;

    while(left < right){
        int currentSum = store[left] + store[right];

        if(currentSum == sum){        

            n1 = store[left];
            n2 = store[right];

            break;

        }else if(currentSum > sum){
            right--;
        }else{
            left++;
        }
    }

    for(int i=0;i<arr.size();i++){
        if(n1 == arr[i]){
            res.push_back(i);
        }else if(n2 == arr[i]){
            res.push_back(i);
        }
    }

    return res;
    }
};