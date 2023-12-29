#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (m % n != 0)
    {
        cout << -1;
        return 0;
    }
    int x = m / n;
    int count = 0;
    for (int i = 2; i <= 3; ++i)
    {
        while (x % i == 0)
        {
            count++;
            x /= i;
        }
    }
    if (x != 1)
        cout << -1;
    else
        cout << count;
    return 0;
}