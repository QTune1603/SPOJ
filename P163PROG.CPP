#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int d = 0;
    for (int i = 1; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            if (x / i <= n)
                d += 2;
            if (i * i == x)
                d--;
        }
    }
    cout << d;
    return 0;
}