#include <bits/stdc++.h>
using namespace std;
int main()
{
	double n, t, k, d;
	cin >> n >> t >> k >> d;
	double sum = k * t / n;
	double sum2 = n * t / k;
	double u= double(ceil(sum2));
	double y= double(ceil(sum));
	double c = y / 2;
	if ((sum2 > sum+d))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}