#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[24][60] = {0};
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x][y]++;
        res = max(res, a[x][y]);
    }
    cout << res;
    return 0;
}