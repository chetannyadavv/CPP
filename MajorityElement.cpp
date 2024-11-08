// Moore Voting Algo
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vi = {1, 2, 1, 2, 1};
    int size = vi.size();
    int ans = vi[0];
    int freq = 1;
    for (int i = 1; i < size; i++)
    {
        if (freq == 0)
            ans = vi[i];
        if (vi[i] == ans)
            freq++;
        else
            freq--;
    }
    cout << ans;
}