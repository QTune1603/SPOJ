#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    int test = 1;
    while (cin >> a >> b)
    {
        if (a == "END" && b == "END")
            break;
        cout << "Case " << test++ << ": ";
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (a == b)
            cout << "same" << endl;
        else
            cout << "different" << endl;
    }
    return 0;
}