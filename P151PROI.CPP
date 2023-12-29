#include <bits/stdc++.h>
using namespace std;

int sumCS(int n)
{
    int a = n;
    int s = 0;
    while (n > 0)
    {
        s += n % 10;
        n /= 10;
    }
    if (s < 10)
        return s;
    return sumCS(s);
}

void solve()
{
    int n;
    cin >> n;
    cout << sumCS(n) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}