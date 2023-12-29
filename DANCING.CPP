#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long h;
    cin >> h;
    long long x = 4 * h - 4;
    long long d = h * h - x;
    cout << x << " " << d;
    return 0;
}