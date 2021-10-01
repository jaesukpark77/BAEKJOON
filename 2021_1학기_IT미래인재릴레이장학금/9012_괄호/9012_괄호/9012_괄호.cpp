#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		stack<char> st;
		string S;
		cin >> S;

		for (int j = 0; j < S.length(); ++j)
		{
			if (st.empty() || S[j] == '(')
			{
				st.push(S[j]);
			}
			else if (st.top() == '(')
			{
				st.pop();
			}
		}
		if (st.empty())
		{
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}