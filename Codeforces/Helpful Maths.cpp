#include <iostream>

using namespace std;

int main()
{
    string n,s;
    cin >> n;
    int l = n.length() , p = l/2 , x = l-p , num[l-p] , c =0;
    if (l > 0 && l <= 100)
    {
        for (int i = 0; i < l; ++i)
        {
            if (n[i] == '1')
            {
                int one = n.find("1");
                n.replace(one,1," ");
                num[c] = 1;
                ++c;
            }
        }
        for (int i = 0; i < l; ++i)
        {
            if (n[i] == '2')
            {
                int two = n.find("2");
                n.replace(two,1," ");
                num[c] = 2;
                ++c;
            }
        }
        for (int i = 0; i < l; ++i)
        {
            if (n[i] == '3')
            {
                int three = n.find("3");
                n.replace(three,1," ");
                num[c] = 3;
                ++c;
            }
        }
        for (int i = 0; i < l-p; ++i)
        {
            if (x - i != 1)
                cout << num[i] << "+";
            if (x - i == 1)
                cout << num[i];
        }

    }

    return 0;
}
