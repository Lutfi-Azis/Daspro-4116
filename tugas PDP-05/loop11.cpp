
#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "input : ";
    cin >> x;
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " x " << x << " = " << i * x << endl;
    }
    return 0;
}
