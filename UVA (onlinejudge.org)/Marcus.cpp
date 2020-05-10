#include <iostream>
#include <cstdio>
#include <stdio.h>

using namespace std;

const int MAX = 9;
char grid[MAX][MAX], nxt;
int t, rows, cols, dx[] = {-1,0,0}, dy[] = {0,1,-1}, idx, nxtX, nxtY;
string moves[] = {"forth", "right", "left"}, path = "IEHOVA#";
pair<int,int> cur;
bool first;

bool valid(int x, int y)
{
    return (x >= 0 && x < rows && y >= 0 && y < cols);
}

int main()
{
    //freopen("o.txt","w",stdout);
    //freopen("i.txt","r",stdin);
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&rows,&cols);
        for(int i = 0; i < rows; i++)
            for(int j = 0; j < cols; j++)
            {
                cin >> grid[i][j];
                if(grid[i][j] == '@')
                cur = {i , j};
            }
        first = 1;
        idx = 0;
        while(true)
        {
            for(int i = 0; i < 3; i++)
            {
                nxtX = cur.first + dx[i];
                nxtY = cur.second + dy[i];
                //cout << nxtX << " " << nxtY << endl;
                if(valid(nxtX , nxtY) && grid[nxtX][nxtY] == path[idx])
                {
                    if(first)
                    {cout << moves[i]; first = 0;}
                    else
                        cout << " " << moves[i];
                    ++idx;
                    cur = {nxtX , nxtY};
                    break;
                }
            }
            if(idx > 6)
                break;
        }
        puts("");
    }
    return 0;
}
