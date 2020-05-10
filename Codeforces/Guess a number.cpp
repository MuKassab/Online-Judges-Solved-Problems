#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long long int ques, num, ri = -2e9, le = 2e9;
    string s;
    char c;
    bool invalid = 0;
    scanf("%lld",&ques);
    while(ques--)
    {
        cin >> s >> num >> c;
        if(s == ">")
        {
            if(c == 'Y')
            {
                if(num >= ri)
                    ri = num + 1;
                else if(num >= le)
                    invalid = 1;
            }
            else
            {
                if(num < le)
                    le = num;
                else if(num < ri)
                    invalid = 1;
            }
        }
        else if(s == "<")
        {
            if(c == 'Y')
            {
                if(num <= le)
                    le = num - 1;
                else if(num <= ri)
                    invalid = 1;
            }
            else
            {
                if(num > ri)
                    ri = num;
                else if(num > le)
                    invalid = 1;
            }
        }
        else if(s == ">=")
        {
            if(c == 'Y')
            {
                if(num > ri)
                    ri = num;
                else if(num > le)
                    invalid = 1;
            }
            else
            {
                if(num < le)
                    le = num - 1;
                else if(num <= ri)
                    invalid = 1;
            }
        }
        else
        {
            if(c == 'Y')
            {
                if(num < le)
                    le = num;
                else if(num < ri)
                    invalid = 1;
            }
            else
            {
                if(num > ri)
                    ri = num + 1;
                else if(num >= le)
                    invalid = 1;
            }
        }
        //cout << "Right : " << ri << " - Left : " << le << endl;
        if(ri > le)
            invalid = 1;
    }
    if(invalid)
        cout << "Impossible" << endl;
    else
        cout << ri << endl;
    return 0;
}
