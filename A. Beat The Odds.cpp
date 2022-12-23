#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc, res = 0; cin >> tc;
    while (tc--) {
        int x, odd = 0, even = 0; cin >> x;

        for (int i = 0; i < x; i++) {
            int y; cin >> y;
            if (y % 2 == 0)even++;
            else odd++;
        }
        cout << min(odd, even) << endl;


    }
}