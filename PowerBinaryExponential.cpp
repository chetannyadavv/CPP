// 3^5 = 3 ^ 101 3^4 3^2 3^1
#include <iostream>
using namespace std;
int main()
{
    int n = 2;
    int pow = 6;
    int ans = 1;
    while (pow > 0)
    {
        if (pow % 2 != 0)
            ans = ans * n;
        n = n * n;
        pow = pow / 2;
    }
    cout << ans;
}