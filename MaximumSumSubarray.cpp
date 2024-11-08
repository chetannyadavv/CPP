// kadane algorith

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vi;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        vi.push_back(x);
    }
    int max_Sum = INT_MIN;
    int current_Sum = 0;
    for (int i = 0; i < size; i++)
    {
        current_Sum = current_Sum + vi[i];
        max_Sum = max(max_Sum, current_Sum);
        if (current_Sum < 0)
            current_Sum = 0;
    }
    cout << "\n"
         << max_Sum;
    return 0;
}