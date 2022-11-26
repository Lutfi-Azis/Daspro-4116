
#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int x;
    int i = 0;
    cout << "input bil : ";
    cin >> x;
    while (x != 9999)
    {
        cout << x << endl;
        sum += x;
        cout << "input bil : ";
        cin >> x;
        i++;
    }
    cout << "jumlah angka = " << i << endl;
    cout << "jumlah cacah  angka = " << sum << endl;
    return 0;
}
