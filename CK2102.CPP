#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    long long a, b, n;
    cin >> a >> b >> n;
    n = n - abs(a) - abs(b) + 1; // Vị trí ngay cạnh đích

    if (n > 0 && (n % 4 == 1 || n % 4 == 3))
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}
