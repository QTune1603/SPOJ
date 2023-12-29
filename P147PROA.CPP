#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    int x = sqrt((A * B) / C);
    cout << 4 * (x + A / x + B / x);
    return 0;
}