#include <iostream>

using namespace std;

int main()
{
    int w,c;
    cin >> w;
    if (w > 0 && w <= 100)
    {
        if (w % 2 == 0)
        {
            c = w - 2;
            if ( c % 2 == 0 && c != 0 )
                cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            if ( c % 2 == 1)
                cout << "NO" << endl;
        }

        if (w % 2 == 1)
            cout << "NO" << endl;
    }


    return 0;
}
