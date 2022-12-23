#include <iostream>

using namespace std;

int main() {

    long long a, b;
    cin >> a >> b;

    long long x = 9223372036854775807 - a;
    

    if (x >= b)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}