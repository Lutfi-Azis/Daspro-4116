#include <iostream>

using namespace std;

/**
 * 1. Jan: 31
 * 2. Feb: 28/29
 * 3. Mar: 31
 * 4. Apr: 30
 * 5. Mei: 31
 * 6. Jun: 30
 * 7. Jul: 31

 * 8. Agu: 31
 * 9. Sep: 30
 * 10.Okt: 31
 * 11.Nov: 30
 * 12.Des: 31
 */

int main()
{
    while(true)
    {
        int hari;
        int bulan;
        cout << "\nMasukkan hari:\n";
        cout << " > ";
        cin >> hari;
        cout << "Masukkan bulan:\n";
        cout << " > ";
        cin >> bulan;

        bool bulanGanjil = bulan % 2 == 1;
        int hariMaksimal;

        /* Jika Februari */
        if (bulan == 2)
        {
            hariMaksimal = 29;
        }
        else if (bulan <= 7)
        {
            if (bulanGanjil)
            {
                hariMaksimal = 31;
            }
            else
            {
                hariMaksimal = 30;
            }
        }
        else
        {
            if (bulanGanjil)
            {
                hariMaksimal = 30;
            }
            else
            {
                hariMaksimal = 31;
            }
        }

        if (hari < 1 || hari > hariMaksimal || bulan < 1 || bulan > 12)
        {
            cout << "TANGGAL TIDAK VALID\n";
        }
        else
        {
            cout << "TANGGAL VALID\n";
        }
    }

    return 0;
}
