#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d, x;
    cin >> d >> x;
    cout << min(d, x) << " " << abs(d - x) / 2;
    return 0;
}