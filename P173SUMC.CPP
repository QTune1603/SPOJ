#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int count = 0;
    for (int i = 0; i <= sqrt(n); i++)
    {
        int b = n - i * i;
        if ((i + b * b) == m)
            count++;
    }
    cout << count;
    return 0;
}