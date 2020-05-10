#include <iostream>
#include <math.h>

using namespace std;

int arr[30];

int main()
{
    int baloons,friends;
    string s;
    cin >> baloons >> friends >> s;
    for(int i = 0; i < baloons; i++)
        ++arr[s[i] - 'a'];
    for(int i = 0; i < friends; i++)
    {
        for(int j = 0; j < 30; j++)
        {
            if(arr[j] > 0)
            {--arr[j]; --baloons;}
        }
    }
    /*for(int i = 0; i < 30; i++)
        cout << arr[i] << " ";
    cout << endl;*/
    if(baloons > 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}
