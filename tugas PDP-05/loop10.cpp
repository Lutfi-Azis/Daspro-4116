
#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 7; i++)
    {
        cout << "--Baris ke-" << i << endl;
        for (int j = 1; j <= 10; j++)
        {
            cout << "Angka ke-" << j << endl;
        }
        cout << "----" << endl;
    }
    return 0;
}
