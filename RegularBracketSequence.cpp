#include<iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int N;
	cin >> N;
	string S;
	while (N--)
	{
		cin >> S;
		int SSize = S.length();
		int Plus , Minus , Others;
		Plus = Minus = Others = 0;

		{	for (int i = 0 ; i < SSize; i++)
				if (S[i] == '(')
					Plus++;
				else if (S[i] == ')')
					Plus--;
				else if (Plus > 0)
					Plus--;
				else if (Plus < 0)
					Plus++;
				else
					Others++;
		}


		if (S[0] == ')')
			cout << "NO" << endl;
		else if (S[SSize - 1] == '(')
			cout << "NO" << endl;
		else if ((Plus + Others) % 2 == 0)
			cout << "YES" << endl;
		else cout << "NO" << endl;

	}


}