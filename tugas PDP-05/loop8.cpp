
#include <iostream>

using namespace std;

int main()
{
    int x;
    int i = 0;
    cout << "input bil : ";
    cin >> x;
    while (x != 9999)
    {
        cout << x << endl;
        cout << "input bil : ";
        cin >> x;
        i++;
    }
    cout << "jumlah angka = " << i << endl;
    return 0;
}
