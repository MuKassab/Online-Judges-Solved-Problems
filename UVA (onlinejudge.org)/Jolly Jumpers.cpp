#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    int x;
    bool ch;
    int a , b;
    while(cin >> x)
    {
        int freq[3010] ={0};
        cin >> a;
        for(int i = 1; i < x; i++)
        {
            cin >> b;
            if((int)abs(a-b) < 3001)
                freq[(int)abs(b-a)] = 1;
            a = b;
        }
        ch = 1;
        for(int i = 1; i <= x - 1; i++)
        {
            if(freq[i] == 0)
            {
                ch = 0;
                break;
            }
        }
        if(ch)
            puts("Jolly");
        else
            puts("Not jolly");
    }
    return 0;
}
