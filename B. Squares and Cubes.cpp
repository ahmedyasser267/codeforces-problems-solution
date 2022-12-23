#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        set<int>st;
        for (int i = 2; i <= sqrt(n); i++)
        {
            st.insert(i * i);
            if (i * i * i <= n)
            {
                st.insert(i * i * i);
            }
        }
        cout << st.size() + 1 << endl;
    }

	return 0;
}