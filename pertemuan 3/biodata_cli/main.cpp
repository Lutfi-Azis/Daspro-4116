/*
 * Nama: Lutfi Azis Hafiizhudin
 * NIM: A11.2022.14618
 **/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int u = 18;
    float t = 172.69;
    char ub = 'L';
    string ubs = "besar";

    cout << "Umur saya " << u << endl;
    cout << "Dengan tinggi " << t << endl;
    cout << "Ukuran bajuku " << ub << " atau " << ubs << endl;

    int a;
    cout << "Masukkan angka: \n > ";
    cin >> a;
    cout << a << " + " << u << " = " << a + u;
    return 0;
}
