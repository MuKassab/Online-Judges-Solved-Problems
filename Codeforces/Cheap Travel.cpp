#include <iostream>

using namespace std;

int main()
{
    int rides , special , onet , specialt , ridec , price1 = 0 , price2;
    cin >> rides >> special >> onet >> specialt;
    ridec = rides;
    while(rides > 0)
    {
        if(rides-special < 0)
            price1 += min(rides*onet , specialt);
        else
            price1 += specialt;
        rides -= special;
    }
    cout << min(price1,ridec * onet);
    return 0;
}
