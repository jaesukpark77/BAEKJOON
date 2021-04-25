#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    int answer = 99999;
    cin >> N;

    int A, B; // A: 3kg 갯수, B: 5kg 갯수
    B = N / 5; //B의 초기값

    for (int i = B; i >= 0; i--)
    {
        A = (N - 5*i) / 3; //A의 초기값
        if (3 * A + 5 * i == N)
        {
            answer = min(answer, A + i);
        } 
    }

    if (answer == 99999)
        cout << -1;
    else
        cout << answer;
}

