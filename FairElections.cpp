//https://www.codechef.com/JAN21C/problems/FAIRELCT
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
		int N, M;
		cin >> N >> M;
		int Arr1[N], Arr2[M], Sum1 = 0, Sum2 = 0;

		for (int i = 0; i < N; i++)
		{
			cin >> Arr1[i];
			Sum1 += Arr1[i];
		}
		for (int i = 0; i < M; i++)
		{
			cin >> Arr2[i];
			Sum2 += Arr2[i];
		}
		//sorting Arr1 in Ascending and Arr2 in Descending.
		sort(Arr1 , Arr1 + N);
		sort(Arr2 , Arr2 + M , greater<int>());
		if (Sum1 > Sum2)
			cout << 0;
		while (Sum2 > Sum1)
		{
			int Times ;
			if (M < N)
				Times = M;
			else Times = N;
			int Index = -1 , count = 0;
			bool A = false;
			while (++Index < Times)
			{
				int temp;
				Sum1 -= Arr1[Index];
				Sum2 -= Arr2[Index];
				Sum1 += Arr2[Index];
				Sum2 += Arr1[Index];

				if (Sum1 > Sum2)
				{
					cout << ++count;
					A = true;
					break;
					//Swapping Successful John Can Win Now
				}
				count++;

			}
			cout << "-1";
		}
		cout << endl;

	}

}