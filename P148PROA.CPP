#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        stack<int> st;
        st.push(n);
        while (st.top() != 1)
        {
            if (st.top() % 2 == 0)
                st.push(st.top() / 2);
            else
                st.push(st.top() * 3 + 1);
        }
        cout << st.size() << endl;
    }
    return 0;
}