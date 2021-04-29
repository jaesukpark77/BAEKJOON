#include <iostream>
#include <string>
#include <vector>
#define NUMBERSIZE 3
using namespace std;

typedef struct inputForm {
	string number;
	int strike;
	int ball;
}INPFORM;

int arr[1000] = { 0 };

int main()
{
	INPFORM input;
	vector<INPFORM> inpVector;
	int N, check, result = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> input.number >> input.strike >> input.ball;
		inpVector.push_back(input);
	}

	// 123-987 범위에서 숫자 체크
	// 각 질문의 숫자를 i와 비교하여 strike, ball을 카운트하고 입력의 strike, ball과 비교한다.
	// 현재 숫자 i가 N번의 질문에서 모두 일치하면 정답카운트를 1 증가한다.
	for (int i = 123; i <= 987; i++)
	{
		check = 0;
		string num = to_string(i);
		if (num[1] == '0' || num[2] == '0' || num[0] == num[1] || num[0] == num[2] || num[1] == num[2])
		{
			continue;
		}

		for (int j = 0; j < N; j++)
		{
			int stkCnt = 0, ballCnt = 0;

			for (int k = 0; k < NUMBERSIZE; k++)
			{
				if (num[k] == inpVector[j].number[k])
				{
					stkCnt++;
				}
				if (num[k] == inpVector[j].number[(k+1)%NUMBERSIZE] || num[k] == inpVector[j].number[(k+2)%NUMBERSIZE])
				{
					ballCnt++;
				}
			}
			if (stkCnt == inpVector[j].strike && ballCnt == inpVector[j].ball)
			{
				check++;
			}
		}
		if (check == N)
		{
			result++;
		}
	}

	cout << result << endl;

	return 0;
}
