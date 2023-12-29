#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t, n;
    cin >> t >> n;
    int l = 2 * n;
    int count = 0;
    for (int i = 2; i <= sqrt(l); i++)
        if (l % i == 0)
        {
            int x = i, y = l / x;
            if ((x + y) % 2 == 1)
                count++;
        }
    cout << t << " " << count << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}