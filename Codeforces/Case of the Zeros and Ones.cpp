#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long int z = 0, o = 0,l;
    string x;
    cin >> l >> x;
    for(int i = 0; i < l; i++)
    {
        if(x[i] == '0')
            ++z;
        else
            ++o;
    }
    cout << l - (min(z,o)*2) << endl;
    return 0;
}
