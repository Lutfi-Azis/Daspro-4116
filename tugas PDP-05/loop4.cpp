#include <iostream>

using namespace std;

int main()
{
    float sum = 0;
    float avg;
    for (int i = 1; i <= 20; i++)
    {
        sum += i;
        cout << "" << i << endl;
    }
    avg = sum / 20;
    cout << "jumlah = " << sum << endl;
    cout << "rata-rata = " << avg << endl;
    return 0;
}
