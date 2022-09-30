#include <iostream>

using namespace std;

int main()
{
//    int a = 6;
//
//    cout << "Masukkan bilangan: ";
//    cin >> a;
//
//    if (a % 2 == 1)
//    {
//        cout << "Bilangan Ganjil!" << endl;
//    }
//    else
//    {
//        cout << "Bilangan Genap!" << endl;
//    }

//    int a = 26;
//
//    while (true)
//    {
//
//        cout << "Masukkan bilangan: ";
//        cin >> a;
//
//        //No 1
//        // Cth: 26, 28, 68
//        if (a % 2 == 0 && a > 20)
//        {
//            cout << "Bilangannya genap dan lebih dari 20 !" << endl;
//        }
//
//        // No 2
//        // Cth: 7, 9, 11
//        if (a % 2 == 1 && a > 5 && a < 13)
//        {
//            cout << "Bilangannya ganjil, lebih dari 5 dan kurang dari 13 !" << endl;
//        }
//
//        // No 3
//        // Cth: 22, 24, 48 atau 7, 9, 13
//        if ((a % 2 == 0 && a > 20 && a < 50)
//                || a % 2 == 1 && a < 15)
//        {
//            cout << "Bilangannya genap lebih dari 20, kurang dari 50, ATAU bilangannya ganjil, kurang dari 15" << endl;
//        }
//   }

    int b = 8;

    if (b > 5) {
        cout << "lebih dari 5" << endl;
    } else if (b == 5){
        cout << "Bilangan adalah 5" << endl;
    } else {
        cout << "Kurang dari 5";
    }
    return 0;
}
