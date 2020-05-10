#include <iostream>

using namespace std;

int main()
{
    int dist = 0 , change;
    char a;
    string x;
    getline(cin,x);
    for(int i = 1; i < x.length(); i+=3)
    {
        a = x[i];
        if (x[i] != '~' && x[i] != '}')
            ++dist;
        while(x.find(a) != -1 && a != '~')
        {
            change = x.find(a);
            x[change] = '~';
        }
    }
    cout << dist;
    return 0;
}
