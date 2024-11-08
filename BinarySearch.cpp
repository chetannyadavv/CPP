#include <bits/stdc++.h>
using namespace std;

int search_iter(vector<int> &arr, int tar)
{
    int st = 0, end = arr.size() - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid] < tar)
            st = mid + 1;
        else if (arr[mid] > tar)
            end = mid - 1;
        else
            return mid;
    }
    return -1;
}

int bs(vector<int> &arr, int target, int st, int end)
{
    if (st > end)
        return -1;
    int mid = st + (end - st) / 2;
    if (arr[mid] < target)
        bs(arr, target, mid + 1, end);
    else if (arr[mid] > target)
        bs(arr, target, st, mid - 1);
    else
        return mid;
}

int main()
{
    vector<int> a = {1, 3, 4, 5, 7, 12, 54, 65};
    int ta = 12;
    int ta2 = 14;
    cout << bs(a, ta, 0, 7) << "\n"
         << bs(a, ta2, 0, 7);
}