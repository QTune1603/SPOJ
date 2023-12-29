#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b)
{
    if (a + b < b + a)
        return 1;
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end(), cmp);
    for (int i = n - 1; i >= 0; i--)
        cout << v[i];
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}