#include <iostream>

using namespace std;

int main()
{
    int length , height , multi = 0;
    cin >> height >> length;
    int snake[height][length];
    for (int row = 0; row < height; ++row)
    {
        if ((row - 1) % 4 == 0)
            multi = multi +2;
        for(int col = 0; col < length; ++col)
        {
            if (row % 2 == 0)
            {
                cout << "#";
            }
            else
            {
                if ((row + multi) % 3 == 0)
                    {
                        if(length - col != 1)
                            cout << ".";
                        else
                            cout << "#";
                    }
                else
                {
                    if(length - col == length)
                        cout << "#";
                    else
                        cout << ".";
                }
            }
        }
        cout << endl;
    }

    return 0;
}
