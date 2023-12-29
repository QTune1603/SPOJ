#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    ll count = 0;
    while (n > 0)
    {
        count++;
        ll tg = 1;
        while (tg * 2 <= n)
        {
            tg *= 2;
        }
        n -= tg;
    }
    cout << count;
    return 0;
}