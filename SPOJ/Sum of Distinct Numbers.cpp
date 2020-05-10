#include <iostream>
#include <set>

using namespace std;

int main()
{
    int x , y , b , c , sum;
    char a;
    cin >> x;
    int arr[x+1];
    for(int i = 1; i <= x; i++)
        cin >> arr[i];
    cin >> y;
    for(int i = 0; i < y; i++)
    {
        sum = 0;
        set<int> s;
        cin >> a >> b >> c;
        if(a == 'U')
            arr[b] = c;
        else
        {
            for(int j = b; j <= c; j++)
            {
                if(s.count(arr[j]) == 0)
                {
                    sum += arr[j];
                    s.insert(arr[j]);
                }
            }
            cout << sum << endl;
        }
    }
    return 0;
}
