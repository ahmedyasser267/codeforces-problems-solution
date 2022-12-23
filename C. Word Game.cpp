#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin >> n;
	map<string, int>nap;
	 vector <vector<string>>in;
	 for (int i = 0; i < 3; i++)
	 {
		 vector<string>st;
		 for (int i = 0; i < n; i++)
		 {
			 string sf;
			 cin >> sf;
			 nap[sf]++;
			 st.push_back(sf);
		 }
		 in.push_back(st);


	 }

	 vector<int>res(3, 0);
	 for (int i = 0; i < 3; i++)
	 {
		 for (int j = 0; j < n; j++)
		 {
			
				 if (nap[in[i][j]] == 1)
					 res[i] += 3;
				 else if (nap[in[i][j]] == 2)
					 res[i]++;
			 

		 }


	 }
	 for (int i = 0; i < 3; i++)
	 {
		 cout << res[i] <<" ";
	 }
	 cout << endl;

}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		solve();
	}

	return 0;
}