#include <iostream>

using namespace std;

int main()
{
    string x;
    while(cin >> x)
    {
        string a = "";
        bool home = 0;
        for(int i = 0; i < x.length(); i++)
        {
            if(x[i] == '[')
                {
                    home = 1;
                    continue;
                }
            if(x[i] == ']')
                {
                    home = 0;
                    continue;
                }
            if(home)
            {
                string c = "";
                while(x[i] != ']' && x[i] != '[' && i < x.length())
                {
                    c += x[i];
                    ++i;
                }
                --i;
                a = c + a;
            }
            else
            {
                string d= "";
                while(x[i] != ']' && x[i] != '[' && i < x.length())
                {
                    d += x[i];
                    ++i;
                }
                --i;
                a = a + d;
            }
        }
        cout << a << endl;
    }
    return 0;
}
