#include <iostream>

using namespace std;

int main()
{
    int exercises;
    cin >> exercises;
    int times[exercises];
    int chest = 0, biceps = 0, back =0;
    for (int i =0; i < exercises;++i)
    {
        cin >> times[i];
    }
    for (int i =0; i < exercises;++i)
    {
        int x = i+1;
        if ( ( ( x - ( (x/3) * 3) == 1) || i == 0) && i != 1)
            chest = chest + times[i];
        if ( ( x - ( (x/3) * 3)  == 2 ) || i == 1)
            biceps = biceps + times[i];
        if ( ( x - ( (x/3) * 3)  == 0) && i != 0)
            back = back + times[i];
    }
    if (chest > biceps && chest > back)
        cout << "chest" << endl;
    else if (biceps > chest && biceps > back)
        cout << "biceps" << endl;
    else
        cout << "back" << endl;
    return 0;
}
