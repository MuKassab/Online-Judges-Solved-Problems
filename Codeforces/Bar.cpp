#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int a , b = 0 , c;
    cin >> a;
    stringstream ss;
    string arr[a];
    string drinks[] = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
        if (arr[i][0] >= 'A')
        {
            for (int j = 0; j < 11;j++)
            {
                if (arr[i] == drinks[j])
                    b++;
            }
        }
        else
        {
            ss << arr[i];
            ss >> c;
            ss.clear();
            if (c <= 17)
                b++;
        }
    }
    cout << b;
    return 0;
}
