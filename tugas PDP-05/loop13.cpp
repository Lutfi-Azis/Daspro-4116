
#include <iostream>

using namespace std;

int main()
{
    cout << "----------------------------------------" << endl;
    cout << "Celcius    Fahrenheit        Keterangan" << endl;
    for (float c = 100; c >= -40; c--)
    {
        float f = c * (9.0 / 5.0) + 32.0;
        string desc;
        if (c >= 100)
            desc = "Air mendidih";
        else if (c >= 40)
            desc = "Air mandi panas";
        else if (c >= 30)
            desc = "Cuaca Pantai";
        else if (c >= 21)
            desc = "Temperatur ruangan";
        else if (c >= 10)
            desc = "Hari yang dingin";
        else if (c == 0)
            desc = "Titik beku air";
        else if (c >= -18)
            desc = "Cuaca dingin bersalju";
        else
            desc = "Cuaca sangat dingin bersalju";
        cout << c << "      |      " << f << "      " << desc << endl;
    }
    return 0;
}
