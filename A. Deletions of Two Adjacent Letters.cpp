#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a;
        cin >> b;
        int i, yes = 0;
        for (i = 0; i < a.size(); i += 2)
        {
            if (a[i] == b[0])
                yes++;
        }

        if (yes > 0)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}