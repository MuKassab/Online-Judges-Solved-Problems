#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int n;
    stringstream conv;
    cin >> n;
    cin.ignore();
    string a,b ="";
    getline(cin,a);
    a+= " ";
    int arr[n];
    for(int i = 0; i < n; i++)
        arr[i] = i;

    for(int j = 0; j < n; j++)
    {
        b = "";
        for(int i = 0; i < n; i++)
        {
            conv << arr[i];
            b += conv.str() + " ";
            conv.clear();
            conv.str("");
        }
        if(b == a)
        {
            cout << "YES" << endl;
            return 0;
        }
        else
        {
            for(int i = 0; i < n; i++)
            {
                if(i%2 == 0)
                {
                     if(arr[i] == n-1)
                            arr[i] = 0;
                     else
                        ++arr[i];
                }
                else
                {
                    if(arr[i] == 0)
                        arr[i] = n-1;
                    else
                        --arr[i];
                }
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
