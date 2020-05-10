#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s = "0123", inst;
    int xs, ys, x, y;
    int ro, co, ans = 0;
    char u, d, l, r;
    cin >> ro >> co;
    char arr[ro][co];
    for(int i = 0; i < ro; i++)
        for(int j = 0; j < co; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j] == 'S')
            {
                xs = i;
                ys = j;
            }
        }
    cin >> inst;
    do{
        u = s[0], d = s[1], l = s[2], r = s[3];
        x = xs;
        y = ys;
        for(int i = 0; i < inst.length(); i++)
        {
            if(inst[i] == u)
            {
                if(x-1 >= 0 && arr[x-1][y] != '#')
                    x--;
                else
                    break;
            }
            else if(inst[i] == d)
            {
                if(x+1 < ro && arr[x+1][y] != '#')
                    x++;
                else
                    break;
            }
            else if(inst[i] == l)
            {
                if(y-1 >= 0 && arr[x][y-1] != '#')
                    y--;
                else
                    break;
            }
            else
            {
                if(y+1 < co && arr[x][y+1] != '#')
                    y++;
                else
                    break;
            }
            if(arr[x][y] == 'E')
            {
                ++ans;
                //cout << s << endl;
                break;
            }
        }
    }while(next_permutation(s.begin(),s.end()));
    cout << ans << endl;
    return 0;
}
