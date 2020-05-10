#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x , a , b , c ,length[3], check , counter = 1 , y = 2 , cut1 = 0 , cut2 = 0 , cut3 = 0;
    bool bo = true;
    cin >> x;
    for (int i = 0; i < 3; ++i)
        cin >> length[i];
    sort(length , length+3);
    a=length[2]; b=length[1]; c=length[0];
    if (x%c == 0)
        {
            cout << x / c;
            return 0;
        }
    else if ( x % c != 0)
    {
        check = x - b;
        while (check % c != 0 )
        {
            check -=b;
            ++counter;
            if (check < 0)
                break;
        }
        if (check >= 0)
            {
                cut1 = counter + (check / c);
            }
    }
    counter = 1;
    if (a > b)
    {
        check = x - a;
        while (check % c != 0 && check >= 0)
        {
            check -= b;
            ++counter;
            while (check % c != 0)
            {
                check -= b;
                ++counter;
                if (check < 0)
                    break;
            }
            if (check >= 0)
                {
                    cut3 =  counter + (check / c);
                    bo = false;
                    break;
                }
            else
            {
                check = x - (y*a);
                counter = y;
                ++y;
                bo = true;
            }
        }
        if (bo == true)
            cut2= counter + (check / c);
    }
    cout << max(max(cut1,cut2),cut3);
    return 0;
}
