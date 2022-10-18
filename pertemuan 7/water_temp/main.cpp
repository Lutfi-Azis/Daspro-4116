#include <iostream>

using namespace std;

int main()
{

    int A = 10, B = 5,
        C = 2;

    cout << (A != B && (C != A || B == C)) << '\n';
    cout << (A < 5 || C > 10 || B == 5) << '\n';
    cout << (A!=B && !(C>5 || B <5)) << '\n';
    cout << (A!=B || B==C) << '\n';

    cout << (A==B || B==C || true) << '\n';

    // float temp;
    // cin >> temp;

    // if (temp <= 0)
    // {
    //     cout << "ICE";
    // }
    // else if (temp > 100)
    // {
    //     cout << "GAS";
    // } else {
    //     cout << "LIQUID";
    // }
    return 0;
}
