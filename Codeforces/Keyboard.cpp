#include <iostream>

using namespace std;

int main()
{
    char arr[] = {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
    char dir;
    string a;
    cin >> dir;
    cin >> a;
    for(int i = 0; i < a.length(); i++)
    {
        for(int j = 0; j < 30; j++)
        {
            if(a[i] == arr[j])
            {
                if (dir == 'R')
                {
                    cout << arr[j-1];
                    break;
                }
                else
                {
                    cout << arr[j+1];
                    break;
                }
            }
        }
    }
    return 0;
}
