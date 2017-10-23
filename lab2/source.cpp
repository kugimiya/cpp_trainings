#include <iostream>
#include <cmath>
using namespace std;

double Tayloring(double X, double E)
{
    double      result = X,
                tmp    = E+1;

    long int    opMod  = -1,
                index  = 1,
                multi  = 1;

    while (abs(tmp) > E)
    {
        multi = 1 + (2 * index);
        tmp   = opMod * (pow(X, multi) / multi);

        result += tmp;

        opMod *= -1;
        index += 1;
    }

    return result;
}

int main(void)
{
    double   Xs = 0.1,
             Xe = 0.9,
             dX = 0.09,
             E  = pow(10, -21);

    for (double index = Xs; index < Xe; index += dX)
    {
        double t = Tayloring(index, E);
        cout << t << "  \t" << index << endl;
    }

    return 0;
}