#include <bits/stdc++.h>
#define MOD 42

using namespace std;

int main()
{
    vector<int> v(10);
    for (int i = 0; i < 10; i++)
    {
        cin >> v[i];
        v[i] %= MOD;
    }
    set<int> s(v.begin(), v.end());
    cout << s.size();
    return 0;
}