#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    long long int right = 0 , left = 0 , numIndex;
    bool check = true;
    char num;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '=' || s.at(i) == '^')
            continue;
        check = false;
        break;
    }
    if (check == true)
        {
            cout << "balance";
            return 0;
        }
    int index = s.find('^');
    for (int i =0; i < s.length(); i++)
    {
        if (s.at(i) == '=' || s.at(i) == '^')
            continue;
        if (i > index)
            right += (i - index) *(s.at(i) - '0');
        else
            left  += (index - i) *(s.at(i) - '0');
    }
    if (left > right)
        cout << "left";
    else if (right > left)
        cout << "right";
    else
        cout << "balance";
    return 0;
}
