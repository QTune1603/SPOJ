#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int a[26] = {0};

    for (int i = 0; i < s.length(); i++)
        a[s[i] - 'a']++;

    int d = 0; // Số kí tự xuất hiện lẻ lần
    for (int i = 0; i < 26; i++)
        if (a[i] % 2 == 1)
            d++;
    if (d <= 3)
        cout << "YES\n";
    else
        cout << "NO\n";
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
