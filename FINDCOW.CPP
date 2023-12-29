#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.length();
    int d = 0;
    for (int i = 0; i < len - 1; i++)
    {
        if (s[i] == ')' && s[i + 1] == ')')
            d++;
    }
    int count = 0;
    for (int i = 0; i < len - 1; i++)
    {
        if (s[i] == '(' && s[i + 1] == '(')
            count += d;
        else if (s[i] == ')' && s[i + 1] == ')')
            d--;
        if (d == 0)
            break;
    }
    cout << count;
    return 0;
}