// [1,3,5,7] will give [105,35,21,15]

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    vector<int> ans(n, 1);
    int temp = 1;
    for (int i = 1; i < n; i++)
    {
        temp = temp * arr[i - 1];
        ans[i] = temp * ans[i];
    }
    temp = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        temp = temp * arr[i + 1];
        ans[i] = temp * ans[i];
    }
    for (auto i : ans)
        cout << i << "      ";
}