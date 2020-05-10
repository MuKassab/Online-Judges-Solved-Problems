#include <iostream>

using namespace std;

void dec(int x[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            --x[i][j];
    }
}

int main()
{
    int press , panel[4][4] , counter;
    char ent;
    bool flag = true;
    cin >> press;
    press *= 2;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> ent;
            if (ent != '.')
                panel[i][j] = (int) ent;
            else
                panel[i][j] = -9;
        }
    }
    while (flag)
    {
        counter = 0;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (counter < press)
                {
                    if (panel[i][j] == 1)
                    {
                        ++counter;
                        panel[i][j] = -9;
                    }
                    else if (panel[i][j] == 0)
                    {
                        flag = false;
                    }
                }
            }
        }
        int check = 0;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (panel[i][j] < 0)
                    ++check;
            }
        }
        if (check == 16)
        {
            cout << "YES";
            return 0;
        }
        dec(panel);
    }
    cout << "NO";
    return 0;
}
