#include <iostream>

using namespace std;

int main()
{
    int numOfBestMoments , button , split = 0 , watching = 0 , start = 1;
    cin >> numOfBestMoments >> button;
    int watch[numOfBestMoments][2];
    for (int i =0; i < numOfBestMoments; i++)
    {
        for (int j = 0; j < 2; ++j)
            cin >> watch[i][j];
    }
    for (int i = 0; i < numOfBestMoments; ++i)
    {
        while(start + button <= watch[i][0])
            start = start + button;
        if (start + button > watch[i][0])
            split = split + watch[i][0] - start + 1;
        start = watch[i][1] + 1;
    }
    for (int i = 0; i < numOfBestMoments; i++)
    {
        watching = watching + watch[i][1] - watch[i][0];
    }
    cout << watching + split;
    return 0;
}
