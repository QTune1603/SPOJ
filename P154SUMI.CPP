#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    int d = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            ll x = i * i + j * j;
            ll z = sqrt(x);
            if (z <= n && z * z == x)
                d++;
        }
    }
    cout << d;
    return 0;
}