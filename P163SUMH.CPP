#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int c1 = 0, c2 = 0, c3 = 0;
    for (int i = 1; i <= 6; i++)
    {
        if (abs(i - a) == abs(i - b))
            c2++;
        else if (abs(i - a) > abs(i - b))
            c3++;
        else
            c1++;
    }
    cout << c1 << " " << c2 << " " << c3;
    return 0;
}