#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int minU = INT_MAX;
    int minD = INT_MAX;
    int sumU = 0, sumD = 0;
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        sumU += a;
        sumD += b;
        minU = min(minU, a);
        minD = min(minD, b);
    }
    sumU += minD;
    sumD += minU;
    cout << max(sumU, sumD);
    return 0;
}