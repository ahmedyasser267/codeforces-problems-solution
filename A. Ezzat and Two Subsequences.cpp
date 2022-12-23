
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long sum = 0; int m;
		long long  c[100000];
		scanf("%d", &m);
		for (int i = 1; i <= m; i++)
			scanf("%lld", &c[i]);
		sort(c + 1, c + m + 1);
		for (int i = 1; i <= m - 1; i++)
			sum += c[i];
		printf("%.9f\n", (1.0 * sum / (m - 1) + c[m]));
	}
}
