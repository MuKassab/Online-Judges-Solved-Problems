#include <iostream>

using namespace std;

int main()
{
    int n , m , inters , counter = 1;
    cin >> n >> m;
    inters = n * m;
    while (inters != 0)
    {
        --n;
        --m;
        ++counter;
        inters = n * m;
    }
    if (counter%2)
        cout << "Malvika";
    else
        cout << "Akshat";
    return 0;
}
