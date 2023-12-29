#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a, b, c;
    cin >> a >> b >> c;
    string s = a + b + c;
    sort(s.rbegin(), s.rend());
    cout << s << endl;
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