#include <bits/stdc++.h>

using namespace std;

int findDuplicate(vector<int> &arr)
{
    int n = arr.size();
    int freq[n + 1] = {
        0};
    for (int i = 0; i < n; i++)
    {
        if (freq[arr[i]] == 0)
        {
            freq[arr[i]] += 1;
        }
        else
        {
            return arr[i];
        }
    }
    return 0;
}

// using slow and fast pointer approach
int findDuplicate2(vector<int> &nums)
{
    int slow = nums[0];
    int fast = nums[0];
    do
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);
    fast = nums[0];
    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}

// using sorting
int findDuplicate3(vector<int> &arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            return arr[i];
        }
    }
}

int main()
{
    vector<int> arr;
    arr = {1, 3, 4, 2, 3};
    cout << "The duplicate element is " << findDuplicate(arr) << endl;
}