#include <iostream>

using namespace std;

int main()
{
    int numOfTeams , times = 0;
    cin >> numOfTeams;
    int color[numOfTeams][2];
    for (int i =0; i < numOfTeams; ++i)
    {
        for(int j = 0; j < 2; ++j)
        {
            cin >> color[i][j];
        }
    }
    for (int i = 0; i < numOfTeams; ++i)
    {
        for (int j =0; j < numOfTeams ; ++j)
        {
            if (color[i][0] == color[j][1] && i != j)
                {
                    ++times;
                }
        }
    }
    cout << times;




    return 0;
}
