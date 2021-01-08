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
	while (N--)
	{
		int  a , b , c;
		cin >> a >> b >> c;
		int sum , slot;
		sum = a + b + c;
		slot = sum / 9;
		if (sum <= 8 || a < slot || b < slot || c < slot)
			cout << "NO" << endl;
		else if ((sum % 9) == 0  )
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}

}