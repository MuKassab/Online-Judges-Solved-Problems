#include <iostream>
#include <sstream>>

using namespace std;

int main()
{
    int num , x=0;
    cin >> num;
    stringstream ss;
    ss << num;
    string nums = ss.str();
    for (int i = 0; i < nums.length(); ++i)
    {
        if (nums[i] == '4' || nums[i] == '7')
            ++x;
    }

    if (num % 4 == 0)
    {
        cout << "YES";
    }
    else if (num % 7 == 0)
    {
        cout << "YES";
    }
    else if (x == nums.length())
    {
        cout << "YES";
    }

    else if (num % 47 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }


    return 0;
}
