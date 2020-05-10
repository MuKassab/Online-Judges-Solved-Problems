#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float n , h , w, dia,x;
    int d;
    cin >> n >> h >> w;
    dia = sqrt((h*h) + (w*w));
    d = floor(dia);
    while(n--)
    {
        cin >> x;
        if(x <= d)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
