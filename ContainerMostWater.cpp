#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> line = {1, 8, 6, 2, 5, 7, 6};
    int lp = 0, rp = line.size() - 1;
    int max_water = INT_MIN, current_water = 0;
    int short_line;
    while (rp > lp)
    {
        short_line = min(line[lp], line[rp]);
        current_water = short_line * (rp - lp);
        max_water = max(max_water, current_water);
        if (line[lp] == short_line)
            lp++;
        else
            rp--;
    }
    cout << max_water;
    return 0;
}