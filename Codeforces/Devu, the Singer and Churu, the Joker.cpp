#include <iostream>

using namespace std;

int main()
{
    int songs , totalTime , jokes = 0;
    cin >> songs >> totalTime;
    int duration[songs];
    for(int i =0; i < songs; i++)
    {
        cin >> duration[i];
        if (i != songs-1)
            duration[i] += 10;
    }
    for (int i =0; i < songs; i++)
    {
        if (totalTime < duration[i])
        {
            cout << -1;
            return 0;
        }
        totalTime -= duration[i];
        if (i != songs-1)
            jokes += 2;
        else
            jokes += totalTime / 5;
    }
    cout << jokes;
    return 0;
}
