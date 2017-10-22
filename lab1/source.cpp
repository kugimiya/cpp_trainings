#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    int const var_a = 157;

    float var_z1 = pow(
        ( 
            ((1+var_a+pow(var_a,2)) / (2*var_a+pow(var_a,2))) + 
            2 - 
            ((1-var_a+pow(var_a,2)) / (2*var_a+pow(var_a,2)))
        ),
        -1
    ) * (5 - (2*pow(var_a, 2)));

    float var_z2 = (4 - pow(var_a,2)) / 2;

    cout << "a = " << var_a << endl << "z1 = " << var_z1 << endl << "z2 = " << var_z2 << endl;

    return 0;
}