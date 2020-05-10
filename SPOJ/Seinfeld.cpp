#include <iostream>

using namespace std;

int main()
{
    string x;
    cin >> x;
    int test = 1;
    while(x[0] != '-')
    {
        int p = 0;
        for(int j = 0; j < x.length()-1;j++)
        {
            if(j == 0 && x[j] == '}')
            {
                ++p;
                x[j] = '{';
            }
            if(x[j] == '{')
            {
                if(x[j+1] == '}')
                {
                    x.erase(j,2);
                    if(j - 2 >= 0)
                        j -= 3;
                    else
                        j = -1;
                }
            }
            if(x.length() == 0)
                break;
        }
        cout << test << ". " << (x.length()/2)+p << endl;
        ++test;
        cin >> x;
    }
    return 0;
}
