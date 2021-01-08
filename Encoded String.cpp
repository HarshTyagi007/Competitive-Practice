//https://www.codechef.com/JAN21C/problems/DECODEIT
#include<iostream>
#include<string>
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
		int N;
		cin >> N;
		char Str[N];
		cin >> Str;

		for (int i = 0; i < N;)
		{
			int count = 0;
			count += (((int)Str[i++] - 48) * 8);
			count += (((int)Str[i++] - 48) * 4);
			count += (((int)Str[i++] - 48) * 2);
			count += (((int)Str[i++] - 48) * 1);
			cout << (char)(count + 97);

		}
		cout << endl;

	}

}