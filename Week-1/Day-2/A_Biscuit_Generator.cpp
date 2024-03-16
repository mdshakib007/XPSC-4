#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int A, B, T;
    cin >> A >> B >> T;

    int biscuits = 0;
    int time = A;
    while (time <= T + 0.5)
    {
        biscuits += B;
        time += A;
    }
    cout << biscuits << '\n';
    return 0;
}
