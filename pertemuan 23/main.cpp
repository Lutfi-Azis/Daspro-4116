#include <iostream>

using namespace std;

int main()
{
    /** Jam menit detik */
//    int x = 7898;
//    int hours, minutes, seconds;
//
//    hours = x / 3600;
//    x -= 3600 * hours;
//
//    minutes = x / 60;
//    x -= 60 * minutes;
//
//    seconds = x;
//
//    cout << "Jam: " << hours << "\nMenit: " << minutes << "\nDetik: " << seconds;


    /** Switch */
//    int a = 5;
//    int b = 6;
//    int c;
//
//    c = a;
//    a = b;
//    b = c;
//    cout << a << "," << b;


    /** Max */
    int a = 10;
    int b = 6;
    int c = 5;

    int maxi = a;
    if (b > maxi) maxi = b;
    if (c > maxi) maxi = c;

    cout << "Maks: " << maxi;

    return 0;
}
