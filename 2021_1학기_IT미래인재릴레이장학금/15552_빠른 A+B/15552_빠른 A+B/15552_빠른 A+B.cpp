#include <cstdio> //c방식 사용
#include<iostream> //C++ 방식 사용
using namespace std;

int main()
{
    //printf,scanf 사용
    /*int T;
    int A, B;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &A, &B);
        printf("%d\n", A+B);
    }

    return 0;*/

    //cout, cin 사용
    cin.tie(NULL);
    cin.sync_with_stdio(false);


    int T;
    int A, B;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> A >> B;
        cout << A + B << "\n";
    }

    return 0;
}

