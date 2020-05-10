#include <iostream>

using namespace std;

int main()
{
    string x;
    int a;
    char vow[] = {'a','e','i','o','u'};
    bool ch;
    getline(cin,x);
    for(int i = 0; i < (int) x.length(); i++)
    {
        ch = 0;
        a = i + 2;
        for(int j = 0; j < 5; j++)
            if(x[i] == vow[j]) ch = 1;
        if(!ch || a >= (int)x.length()) {cout << x[i]; continue;}
        if(x[i] == x[i+2] && x[i+1] == 'p')
        {
            cout << x[i];
            i = a;
            continue;
        }
        cout << x[i];
    }
    return 0;
}
