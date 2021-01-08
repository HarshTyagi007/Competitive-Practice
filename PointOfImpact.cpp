//https://www.codechef.com/JAN21C/problems/BILLRD
#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int T;
	cin >> T;
	while (T--)
	{
		int N, K , x , y;
		cin >> N >> K >> x >> y;
		while (K--)
		{
			if (((x == N) && (y == N)) || ((x == N) && (y == 0)) || ((x == 0) && (y == N)) || ((x == 0) && (y == 0)))
				break;

			else if (y == 0)
			{
				y = y + (N - x);
				x = N;
			}
			else if (x == 0)
			{
				x = y;
				y = 0;
			}
			else if (x == N)
			{
				y = y + x;
				x = y - x;
				y = y - x;
			}
			else if (y == N)
			{
				y = N - x;
				x = 0;
			}
			else {
				y = y + (N - x);
				x = N;
			}
		}
		cout << x << " " << y;
		cout << endl;

	}

}