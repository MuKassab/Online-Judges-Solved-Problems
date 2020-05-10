#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;


int main()
{

    pair<double, double> x, y;
    double n,t;
    cin >> x.first >> x.second >> y.first >> y.second;
    /*x.first = abs(x.first);
    y.first = abs(y.first);
    y.second = abs(y.second);
    x.second = abs(x.second);*/
    if(x.first == 0)
        n = x.second;
    else if(x.second == 0)
        n = x.first;
    else
    {
        n = x.first * x.first + x.second * x.second;
        n = sqrt(n);
    }
    if(y.first == 0)
        t = y.second;
    else if(y.second == 0)
        t = y.first;
    else
    {
        t = y.first * y.first + y.second * y.second;
        t = sqrt(t);
    }
    if(abs(n) < abs(t))
        cout << "Russo" << endl;
    else if(abs(n) > abs(t))
        cout << "Wil" << endl;
    else
        cout << "Empate" << endl;
    return 0;
}
