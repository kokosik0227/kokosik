/**
 * Done by:
 * Student Name: Nikita Kompanchenko
 * Student Group: 123
 * Lab 1.5
 */

#include <iostream>
#include <cmath>

using namespace std;

//Task 1
int main() {
    {
        int A1 = 45;
        int B1 = 13;
        int C1 = 47;
        int D1 = 59;

        // <УЛО1> (<УЛО2> (A<ОВ1>B) <БЛО> (<УЛО3> (C<ОВ2>D)))
        //  !(!( A1 != B1) || (!(C1 > D1)))
        bool res1 = (!(A1 != B1) || (!(C1 > D1)));
        cout << "res: " << boolalpha << res << endl;
    }

   //Task 2
    {
        float A2 = 84.6;
        float B2 = 84.6;
        int C2 = 63;
        int D2 = 34;

        // <УЛО1> (<УЛО2> (A<ОВ1>B) <БЛО> (<УЛО3> (C<ОВ2>D)))
        //  !(!( A2 != B2) || (!(C2 > D2)))
        bool res2 = (!(A2 != B2) || (!(C2 > D2)));
        cout << "res: " << boolalpha << res << endl;
    }
    //Task 3
    {
        const int A = 71;
        int B = 15;
        short E = 49;
        short *C;
        double D = 53.4;
        C = &E;
        //A <БО1> <УО> B <АО1> <СО> C <ОВ> D <АО2> E <БО2> <БазО> F
        bool res = (A & (~B)) + (sizeof(C) * D) != (E * 49) >> 1 * sizeof(short);
        cout << "res: " << boolalpha << res3 << endl;
    }
    return 0;
}