#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int count = 0;
    set<char> s(str.begin(), str.end());
    if (s.size() % 2)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
    return 0;
}