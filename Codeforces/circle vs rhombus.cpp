#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a;
    cin >> a;
    const double pi = 3.1415926535898;
    //cout << setprecision(30) << pi << endl;
    cout << fixed << setprecision(6)  << pi*a*a << endl;
    a*=2;
    cout << a*a*.5 << endl;
    return 0;
}
