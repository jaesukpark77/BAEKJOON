#include <iostream>
#include <vector>
#include <cstdio>
#include <stdio.h>
#include <string>
#include <cstring>
#include <stack>
#include <algorithm>
using namespace std;

int N;
char arr[26][26];
vector<int> value;

int nx[4] = { 0, 0, 1, -1 };
int ny[4] = { -1, 1, 0, 0 };

int func(int x, int y) {

	if (x < 0 || y < 0 || x >= N || y >= N)
	{
		return 0;
	}

	if (arr[x][y] != '1')
	{
		return 0;
	}

	arr[x][y] = '3';

	int sum = 1;
	for (int i = 0; i < 4; i++) {
		sum += func(x + nx[i], y + ny[i]);
	}

	return sum;
}


int main()
{
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j] == '1') {
				arr[i][j] = '3';

				int sum = 1;
				for (int k = 0; k < 4; k++) {
					sum += func(i + nx[k], j + ny[k]);
				}

				value.push_back(sum);
			}
		}
	}

	sort(value.begin(), value.end());
	// 크기
	cout << value.size() << "\n";

	// 집 수
	for (int i = 0; i < value.size(); i++) {
		cout << value[i] << '\n';
	}
	return 0;
}
