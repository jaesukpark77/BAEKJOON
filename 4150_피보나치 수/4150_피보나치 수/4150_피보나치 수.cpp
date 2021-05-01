#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector <string> fibonacci;

string sum_str(string a, string b) {
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	if (a.length() > b.length()) {
		while (a.length() != b.length()) {
			b += "0";
		}
	}
	else {
		while (a.length() != b.length()) {
			a += '0';
		}
	}

	string c;
	int carry = 0;
	for (int i = 0; i < a.length(); i++) {
		int sum = a[i] + b[i] - '0' - '0' + carry;
		if (sum < 10) {
			c += (char)(sum + '0');
			carry = 0;
		}
		else {
			c += (char)(sum - 10 + '0');
			carry = 1;
		}
	}
	if (carry == 1) c += '1';

	reverse(c.begin(), c.end());

	return c;

}

int main()
{
	int n;
	cin >> n;

	fibonacci.push_back("0");
	fibonacci.push_back("1");

	if (n == 0) cout << "0";
	if (n == 1) cout << "1";;

	for (int i = 2; i <= n; i++) {
		if (i == n)
			cout << sum_str(fibonacci[i - 2], fibonacci[i - 1]);

		fibonacci.push_back(sum_str(fibonacci[i - 2], fibonacci[i - 1]));
	}
}


// 범위 초과로 인한 시간 초과!!!
/*long long fibo(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		return fibo(n - 1) + fibo(n - 2);
	}
}

int main() {
	int n;
	cin >> n;
	cout << fibo(n) << '\n';
} */