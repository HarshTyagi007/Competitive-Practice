#include <iostream>
#include<bits/stdc++.h>
using namespace std;
char NumWord[101][20] = {
	"zero"
	, "one"
	, "two"
	, "three"
	, "four"
	, "five"
	, "six"
	, "seven"
	, "eight"
	, "nine"
	, "ten"
	, "eleven"
	, "twelve"
	, "thirteen"
	, "fourteen"
	, "fifteen"
	, "sixteen"
	, "seventeen"
	, "eighteen"
	, "nineteen"
	, "twenty"
	, "twenty one"
	, "twenty two"
	, "twenty three"
	, "twenty four"
	, "twenty five"
	, "twenty six"
	, "twenty seven"
	, "twenty eight"
	, "twenty nine"
	, "thirty"
	, "thirty one"
	, "thirty two"
	, "thirty three"
	, "thirty four"
	, "thirty five"
	, "thirty six"
	, "thirty seven"
	, "thirty eight"
	, "thirty nine"
	, "forty"
	, "forty one"
	, "forty two"
	, "forty three"
	, "forty four"
	, "forty five"
	, "forty six"
	, "forty seven"
	, "forty eight"
	, "forty nine"
	, "fifty"
	, "fifty one"
	, "fifty two"
	, "fifty three"
	, "fifty four"
	, "fifty five"
	, "fifty six"
	, "fifty seven"
	, "fifty eight"
	, "fifty nine"
	, "sixty"
	, "sixty one"
	, "sixty two"
	, "sixty three"
	, "sixty four"
	, "sixty five"
	, "sixty six"
	, "sixty seven"
	, "sixty eight"
	, "sixty nine"
	, "seventy"
	, "seventy one"
	, "seventy two"
	, "seventy three"
	, "seventy four"
	, "seventy five"
	, "seventy six"
	, "seventy seven"
	, "seventy eight"
	, "seventy nine"
	, "eighty"
	, "eighty one"
	, "eighty two"
	, "eighty three"
	, "eighty four"
	, "eighty five"
	, "eighty six"
	, "eighty seven"
	, "eighty eight"
	, "eighty nine"
	, "ninety"
	, "ninety one"
	, "ninety two"
	, "ninety three"
	, "ninety four"
	, "ninety five"
	, "ninety six"
	, "ninety seven"
	, "ninety eight"
	, "ninety nine"
	, "hundred"
};

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int n, D = 0, pairs = 0;
	cin >> n;
	int Numbers[n];
	int size = sizeof(Numbers) / sizeof(Numbers[0]);
	for (int i = 0; i < n; i++)
	{
		cin >> Numbers[i];
		int num = Numbers[i];
		auto word = NumWord[num];
		for (int j = 0; ((word[j] != '\0')); j++)
		{
			if (word[j] == 'a' || word[j] == 'e' || word[j] == 'i' || word[j] == 'o' || word[j] == 'u')
				D++;
		}
	}
	sort(Numbers, Numbers + size);
	for (int i = 0; i < size; i++)
	{	if (Numbers[i] > D)
			break;
		for (int j = i + 1; j < size; j++)
			if (Numbers[i] + Numbers[j] == D)
				pairs++;
	}
	cout << pairs;
}

