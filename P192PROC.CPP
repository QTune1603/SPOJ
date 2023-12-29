#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    int a[100005];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll s = 0;
    ll d = 0; // Cộng dồn để nhân
    for (int i = 1; i < n; i++)
    {
        d += a[i - 1];
        s += a[i] * d;
    }
    cout << s;
    return 0;
}