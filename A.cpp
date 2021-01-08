#include<iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	/*5
	A---B*/
	int N;
	cin >> N;
	string s;
	cin >> s;
	int i = 0;
	int v1 = 0;
	int v2 = 0;
	int j = 0;
	while (s[j] != '\0')
	{
		if (s[j] == 'A')
			v1++;
		else if (s[j] == 'B')
			v2++;
		j++;
	}
	while (s[i] == '-')
	{
		i++;
	}
	if (s[i] == 'A')
	{
		v1 += i;
	}
	int start = i;
	for (; i < N;)
	{
		while (s[i] == '-' && i < N)
		{
			i++;
		}
		if (i == N)
		{
			break;
		}
		if (s[i] == 'A')
		{
			if (start == i)
			{
				i++;
				continue;
			}
			v1 = v1 + (i - start - 1);
			start = i;
			i++;
			continue;
		}
		start = i;
		i++;
		while (s[i] == '-' && i < N)
		{
			i++;
		}
		if (i == N)
			v2 = v2 + (i - start - 1);
		else
		{
			if (s[i] == 'A')
			{
				v1 = v1 + (i - start - 1) / 2;
				v2 = v2 + (i - start - 1) / 2;
				start = i;
				i++;
			}
			else
			{
				v2 = v2 + (i - start - 1);
			}
		}

	}
	if (v1 > v2)
	{
		cout << "A" << endl;
	}
	else if (v1 == v2)
	{
		cout << "Coalition government" << endl;
	}
	else
	{
		cout << "B" << endl;
	}
}