#include <iostream>

using namespace std;

int main()
{
    int a , b;
    cin >> a >> b;
    char lines[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
            cin >> lines[i][j];
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
            {
                if (i%2 == 0)
                {
                    if (j%2 == 0&& lines[i][j] == '.')
                        cout<< "B";
                    else if (j%2 == 1 && lines[i][j] == '.')
                        cout << "W";
                    else
                        cout << lines[i][j];
                }
                else
                {
                    if (j%2 == 0&& lines[i][j] == '.')
                        cout<< "W";
                    else if (j%2 == 1 && lines[i][j] == '.')
                        cout << "B";
                    else
                        cout << lines[i][j];
                }
            }
        cout << endl;
    }
    return 0;
}
