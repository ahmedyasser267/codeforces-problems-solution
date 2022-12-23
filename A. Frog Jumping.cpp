#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, q, d;
    long long int ans;
    int t;
    cin >> t;
    while (t--)
    {
        ans = d = 0;
        cin >> a >> b >> q;
        if (q % 2 == 1) {
            d = (q / 2) + 1;
        }
        else {
            d = q / 2;
        }
        ans = (d * a) - ((q - d) * b);
        cout << ans << "\n";
    }
    return 0;
}