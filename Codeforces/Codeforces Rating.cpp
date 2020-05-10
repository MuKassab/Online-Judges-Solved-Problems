#include <iostream>

using namespace std;

int main()
{
    int x,c,f,s,e,a;
    cin >> x;
    while(x--)
    {
        cin >> c >> f;
        e = 0;
        for(int i = 0; i < c; i++)
        {
            cin >> a;
            e+= a;
        }
        if(e+1500 == f)
            cout << "Correct" << endl;
        else
            cout << "Bug" << endl;
    }
    return 0;
}
