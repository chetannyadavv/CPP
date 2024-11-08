// Sorted array

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vi = {1, 2, 3, 5};
    int target = 7;
    int i = 0, j = vi.size() - 1;
    while (i < j)
    {
        if (vi[i] + vi[j] > target)
            j--;
        else if (vi[i] + vi[j] < target)
            i++;
        else
        {
            cout << vi[i] << "\n"
                 << vi[j];
            break;
        }
    }
}