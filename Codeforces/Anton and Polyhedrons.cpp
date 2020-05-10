#include <iostream>

using namespace std;

int main()
{
    long int x , tot = 0;
    string a;
    cin >> x;
    for(int i = 0; i < x; i++)
    {
        cin >> a;
        if(a=="Tetrahedron")
            tot += 4;
        else if (a=="Cube")
            tot += 6;
        else if(a=="Octahedron")
            tot += 8;
        else if(a=="Dodecahedron")
            tot += 12;
        else
            tot += 20;
    }
    cout << tot;
    return 0;
}
