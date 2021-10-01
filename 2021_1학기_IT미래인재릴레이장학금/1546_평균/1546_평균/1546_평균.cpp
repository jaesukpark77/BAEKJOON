#include <iostream>
using namespace std;


int main()
{
    int N;
    cin >> N;

    int score;
    int total_score = 0;
    double average = 0;
    
    int max = -1;

    for (int i = 0; i < N; i++)
    {
        cin >> score;
        total_score += score;
        if (max < score)
        {
            max = score;
        }
    }
    average = (double) total_score / max * 100;
    average = average / N;

    cout << average;
    return 0;

}

