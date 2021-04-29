#include <iostream>
using namespace std;

int dp[1000001];

int recursive(int num) {
	if (num == 1)
	{
		return 0;
	}

	if (dp[num] > 0)
	{
		return dp[num];
	}

	dp[num] = recursive(num - 1) + 1;
	if (num % 3 == 0)
	{
		int save = recursive(num / 3) + 1;
		if (dp[num] > save)
		{
			dp[num] = save;
		}
	}

	if (num % 2 == 0)
	{
		int save = recursive(num / 2) + 1;
		if (dp[num] > save)
		{
			dp[num] = save;
		}
	}

	return dp[num];
}

int main(void)
{
	int num;
	cin >> num;
	cout << recursive(num) << endl;

	return 0;
}

