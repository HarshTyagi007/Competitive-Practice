//https://www.codechef.com/JAN21C/problems/DIVTHREE
#include<iostream>
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
		long  N, K, D;
		cin >> N >> K >> D;
		long  Arr[N] , count = 0;
		for (long  i = 0; i < N; i++)
		{
			cin >> Arr[i];
			count += Arr[i];
		}
		long  Days = count / K;
		if (Days < D)
			cout << Days << endl;
		else if (D < Days)
			cout << D << endl;
	}

}