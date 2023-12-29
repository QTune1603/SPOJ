#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while (cin >> s)
    {
        int d[26] = {0};
        for (int i = 0; i < s.length(); i++)
        {
            d[s[i] - 'a']++;
        }
        int count = 0; // Đếm số lượt chơi
        for (int i = 0; i < 26; i++)
        {
            if (d[i] % 2 == 1)
                count++;
        }
        if (count < 2 || count % 2 == 1)
            cout << "First\n";
        else
            cout << "Second\n";
    }
    return 0;
}