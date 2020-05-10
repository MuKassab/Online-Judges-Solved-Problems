#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long int total , repeat , green , black ;
    float s , l , m , q;
    cin >> total >> repeat >> green >> black;
    string a = "";
    long int c = repeat;
    bool fg = 1, fb = 1;
    if (black >= green)
    {
        s = ceil((float)black / repeat)-1;
        l = floor(green / s);
        q = green - (l * s);
        while(black > 0)
        {
            c = repeat;
            fg = 1;
            m = 0;
            while (c > 0 && black > 0)
            {
                a += "B";
                --c;
                --black;
            }
            c = repeat;
            while (green > 0 && m < l)
             {
                if (q > 0 && m == 0)
                {a+= "G"; --green; --q; --c;}
                if (c > 0)
                {a+= "G";
                fg = 0;
                ++m;
                --green;
                --c;}
                else
                    break;
             }
            if ((green == 0 && fg && black > 0) || l == 0)
            {
                cout << "NO";
                return 0;
            }
        }
    }
    else
    {
        s = ceil((float) green / repeat)-1;
        l = floor(black / s);
        q = black - (l * s);
        while(green > 0)
        {
            c = repeat;
            fb = 1;
            m = 0;
            while (c > 0 && green > 0)
            {
                a += "G";
                --c;
                --green;
            }
            c = repeat;
            while (black > 0 && m < l)
            {
                if (q > 0 && m == 0)
                {a+= "B"; --black; --q; --c;}
                if (c > 0)
                {a+= "B";
                fb = 0;
                ++m;
                --black;
                --c;}
                else
                    break;
            }
            if ((black == 0 && fb && green > 0) || l ==0)
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << a;
    return 0;
}
