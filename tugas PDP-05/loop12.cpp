
#include <iostream>

using namespace std;

int main()
{
    cout << "---------------------" << endl;
    cout << "Celcius    Fahrenheit" << endl;
    for (float c = 0; c <= 100; c++)
    {
        float f = c * (9.0 / 5.0) + 32.0;
        cout << c << "      |      " << f << endl;
    }
    return 0;
}
