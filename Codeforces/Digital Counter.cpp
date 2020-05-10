#include <iostream>

using namespace std;

int main()
{
    int arr[] = {2,7,2,3,3,4,2,5,1,2};
    string a;
    cin >> a;
    cout << arr[a[0]-'0'] * arr[a[1]-'0'] << endl;
    return 0;
}
