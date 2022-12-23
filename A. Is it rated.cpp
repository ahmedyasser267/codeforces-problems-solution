#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[5000], b[5000];
    cin >> n;

    int rated = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        if (a[i] != b[i]) {
            rated = 1;
        }
    }
    if (rated == 1) {
        cout << "rated\n";
        return 0;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                rated = -1;
            }
        }
    }


    if (rated == -1) {
        cout << "unrated\n";
    }
    else {
        cout << "maybe\n";
    }

    
	
	return 0;
}