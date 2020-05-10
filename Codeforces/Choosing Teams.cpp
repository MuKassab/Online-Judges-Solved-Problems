#include <iostream>

using namespace std;

int main()
{
    int numOfStudents , times , counter = 0;
    cin >> numOfStudents >> times;
    int students[numOfStudents] , years[numOfStudents];
    for (int i = 0; i < numOfStudents; ++i)
    {
        cin >> students[i];
    }
    for (int i = 0; i < numOfStudents ; ++i)
    {
        int temp = -1;
        for (int j = 0; j < numOfStudents; ++j)
        {
            if (students[j] > temp)
            {
                temp = students[j];
            }
        }
        for (int j = 0; j < numOfStudents; ++j)
        {
            if (students[j] == temp)
            {
                students[j] = -2;
                break;
            }
        }
        years[i] = temp;
    }
    int rev[numOfStudents];
    for (int i = numOfStudents - 1; i >= 0; --i )
    {
        int x = 1;
        rev[numOfStudents - i - x] = years[i];
        ++x;
    }
    for (int i = 0; i < numOfStudents; i+= 3)
    {
        for(int j = i ; j < i + 3 ; ++j)
        {
            if (( rev[j] + times) <= 5 )
                ++counter;
            else
                break;
        }
    }
    cout << counter / 3;
    return 0;
}
