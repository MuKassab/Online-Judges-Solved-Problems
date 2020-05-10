#include <bits/stdc++.h>
using namespace std;
int main()
{
    string r1 , r2 , r3 , r4 , r5;
    int num1=0 , num2=0;
    getline(cin , r1);
    getline(cin , r2);
    getline(cin , r3);
    getline(cin , r4);
    getline(cin , r5);
    if (r1.find('1') >= 0 && r1.find('1') <= 8)
    {
        if (r1.find('1') < 4)
        {
            for (int a = r1.find('1'); a < 4 ; a = a+2)
            {
                ++num1;
            }
        }
        else if (r1.find('1') > 4)
        {
            for (int a = r1.find('1'); a > 4; a = a-2)
                ++num1;
        }
        num2 = 2;
        cout << num1+ num2;
    }
    if (r2.find('1') >= 0 && r2.find('1') <= 8)
    {
        if (r2.find('1') < 4)
        {
            for (int a = r2.find('1'); a < 4 ; a = a+2)
            {
                ++num1;
            }
        }
        else if (r2.find('1') > 4)
        {
            for (int a = r2.find('1'); a > 4; a = a-2)
                ++num1;
        }
        num2 = 1;
        cout << num1+ num2;
    }
    if (r3.find('1') >= 0 && r3.find('1') <= 8)
    {
        if (r3.find('1') < 4)
        {
            for (int a = r3.find('1'); a < 4 ; a = a+2)
            {
                ++num1;
            }
        }
        else if (r3.find('1') > 4)
        {
            for (int a = r3.find('1'); a > 4; a = a-2)
                ++num1;
        }

        cout << num1+ num2;
    }
    if (r4.find('1') >= 0 && r4.find('1') <= 8)
    {
        if (r4.find('1') < 4)
        {
            for (int a = r4.find('1'); a < 4 ; a = a+2)
            {
                ++num1;
            }
        }
        else if (r4.find('1') > 4)
        {
            for (int a = r4.find('1'); a > 4; a = a-2)
                ++num1;
        }
        num2 = 1;
        cout << num1+ num2;
    }
    if (r5.find('1') >= 0 && r5.find('1') <= 8)
    {
        if (r5.find('1') < 4)
        {
            for (int a = r5.find('1'); a < 4 ; a = a+2)
            {
                ++num1;
            }
        }
        else if (r5.find('1') > 4)
        {
            for (int a = r5.find('1'); a > 4; a = a-2)
                ++num1;
        }
        num2 = 2;
        cout << num1+ num2;
    }

    return 0;

}
