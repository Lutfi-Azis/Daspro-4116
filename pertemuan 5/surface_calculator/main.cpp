#include <iostream>

using namespace std;

int main()
{
    float p, l, t;
    cout << "Alat penghitung luas permukaan balok!" << endl;

    cout << "\nMasukkan panjang: ";
    cin >> p;

    cout << "\nMasukkan lebar: ";
    cin >> l;

    cout << "\nMasukkan tinggi: ";
    cin >> t;

    float hasil = 2 * (p * l + p * t + l * t);
    cout << "\n\nLuas permukaan balok adalah: " << hasil;
    return 0;
}
