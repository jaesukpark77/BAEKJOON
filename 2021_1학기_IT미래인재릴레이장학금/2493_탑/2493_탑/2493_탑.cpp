#include <iostream>
#include <stack>
using namespace std;

stack<int> value;
stack<int> index;
int R[500001];
int answer[500001] = { 0 };

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> R[i];
    }

    for (int i = N-1; i > 0; i--)
    {
        if (R[i-1] >= R[i]) //R[i-1]과 R[i]의 값을 비교
        {
            answer[i] = i; // answer[i]의 값을 i위치에 대입
            while (!value.empty())
            {
                if (R[i-1] >= value.top())
                {
                    answer[index.top()] = i;
                    value.pop();
                    index.pop();
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            value.push(R[i]);
            index.push(i);
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << answer[i] << " ";
    }
    return 0;
}

