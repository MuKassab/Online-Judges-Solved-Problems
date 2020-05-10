#include <iostream>

using namespace std;

int find(int arr[], int len, int seek)
{
    for (int q = 0; q < len; ++q)
    {
        if (arr[q] == seek) return q;
    }
    return 0;
}

int main()
{
    int health , numOfDragons;
    bool check = 1;
    cin >> health >> numOfDragons;
    int Dhealth[numOfDragons] , Dbonus[numOfDragons];
    for (int i = 0; i < numOfDragons ; ++i)
    {
        cin >> Dhealth[i] >> Dbonus[i];
    }
    int x[numOfDragons] , y[numOfDragons] , Dhealth2[numOfDragons];
    for (int i = 0; i < numOfDragons; ++i)
    {
        Dhealth2[i] = Dhealth[i];
    }
    for (int i = 0; i < numOfDragons ; ++i)
    {
        int temp = 0;
        for (int j = 0; j < numOfDragons; ++j)
        {
            if (Dhealth[j] > temp)
            {
                temp = Dhealth[j];
            }
        }
        for (int j = 0; j < numOfDragons; ++j)
        {
            if (Dhealth[j] == temp)
            {
                Dhealth[j] = 0;
                break;
            }
        }
        x[i] = temp;
    }
    for (int j = 0 ; j < numOfDragons; ++j)
        {
            int lol = find(Dhealth2 ,numOfDragons , x[j]);
            y[j] = Dbonus[lol];
            Dhealth2[lol] = 0;
        }
    for (int j = numOfDragons - 1; j >= 0; --j)
        {
            if (health > x[j])
            {
                health += y[j];
            }
            else
            {
                cout << "NO";
                check = 0;
                break;
            }
        }
    if (check == 1)
    {
        cout << "YES";
    }
    return 0;
}
