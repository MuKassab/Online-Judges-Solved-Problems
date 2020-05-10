#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x , y , a , b , maxi , index = 0;
    cin >> x >> y;
    string arr[x+1];
    int success[x+1] = {} , maximum[y];
    for (int i = 1; i <= x; i++)
        cin >> arr[i];
    if (x == 1)
    {
        cout << "1";
        return 0;
    }
    for (int i = 0; i < y; i++)
    {
        maxi = 0;
        for (int j = 1; j < x; ++j)
        {
            a = arr[j].at(i) - '0';
            b = arr[j+1].at(i) - '0';
            if (a < b && b > maxi)
                maxi = b;
            else if ( a > maxi)
                maxi = a;
        }
        maximum[i] = maxi;
    }
    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            a = arr[i].at(j) - '0';
            if (a == maximum[j])
                ++success[i];
        }
    }
    int counter = 0;
    for (int i =1; i < x+1; i++)
        if (success[i] != 0)
            ++counter;
    cout << counter;
    return 0;
}
