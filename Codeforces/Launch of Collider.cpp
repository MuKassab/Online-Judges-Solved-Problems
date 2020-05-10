#include <iostream>


using namespace std;

int main()
{
    int n;
    cin >> n;
    int mini = 10e9 + 20;
    string x;
    int arr[n];
    cin >> x;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    bool ch = 0;
    for(int i = 0; i < n-1; i++)
    {
        if(x[i] == 'R' && x[i+1] == 'L')
        {
            mini = min(mini,(arr[i+1] - arr[i])/2);
            ch = 1;
        }
    }
    if(ch)
        cout << mini << endl;
    else
        cout << -1 << endl;
    return 0;
}
