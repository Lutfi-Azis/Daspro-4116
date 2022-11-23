#include <iostream>

using namespace std;

int main()
{
    int x;
    int min = 99999;
    int max = -99999;
    while (true)
    {
        cin >> x;
        if (x == -99)
            break;
        if (x < min)
            min = x;
        if (x > max)
            max = x;
    }
    cout << "max = " << max << endl;
    cout << "min = " << min << endl;
    return 0;
}
