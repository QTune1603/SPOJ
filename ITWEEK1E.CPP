#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;
    if (n >= a && m >= a && n + m >= 3 * a)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}