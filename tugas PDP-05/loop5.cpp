#include <iostream>

using namespace std;

int main()
{
    cout << "Program ini akan berhenti jika Anda menginput '-99'" << endl;
    int x;
    while (true)
    {
        cout << "Masukkan Nilai Anda: ";
        cin >> x;
        if (x == -99)
            break;
    }
    cout << "Keluar karena break" << endl;
    return 0;
}
