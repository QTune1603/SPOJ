#include <bits/stdc++.h>
using namespace std;

int main()
{
    int S, X;
    cin >> S >> X;
    int a[5];
    for (int i = 0; i < 5; i++)
        cin >> a[i];
    int n = S * X;
    for (int i = 0; i < 5; i++)
        cout << a[i] - n << " ";
    return 0;
}