#include <iostream>
#include <cstdio>
#include <stack>
#include <stdio.h>

using namespace std;

const int MAX = 26;
int sizeOfImage,numOfEagles,caseNum;
char vis[MAX][MAX], mat[MAX][MAX];

void init()
{
    for(int i = 0; i < 26; i++)
        for(int j = 0; j < 26; j++)
            vis[i][j] = mat[i][j] = 0;
}

bool valid(int x, int y)
{
	return (x >= 0 && x < sizeOfImage && y >= 0 && y < sizeOfImage);
}

void dfs(int sx/*i*/, int sy/*j*/)
{
	stack<pair<int,int> > st;
	int ux, uy, vx, vy, dj[8] = {0,1,0,-1,1,-1,1,-1}, di[8] = {1,0,-1,0,-1,-1,1,1};
	vis[sx][sy] = 1;
	st.push(make_pair(sx, sy));
	while(!st.empty())
    {
		ux = st.top().first, uy = st.top().second;
		st.pop();
		for (int i = 0; i < 8; i++){
			vx = ux + di[i], vy = uy + dj[i];
			if (valid(vx, vy) && !vis[vx][vy] && mat[vx][vy] == '1'){
				st.push(make_pair(vx, vy));
				vis[vx][vy] = 1;
			}
		}
	}
}

int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    while(cin >> sizeOfImage)
    {
        numOfEagles = 0;
        init();
        for(int i = 0; i < sizeOfImage; i++)
            for(int j = 0; j < sizeOfImage; j++)
                cin >> mat[i][j];
        /*for(int i = 0; i < sizeOfImage; i++){
            for(int j = 0; j < sizeOfImage; j++)
                cout << mat[i][j];
            cout << endl;
        }*/
        for(int i = 0; i < sizeOfImage; i++)
        {
            for(int j = 0; j < sizeOfImage; j++)
            {
                if(mat[i][j] == '1' && !vis[i][j])
                {
                    ++numOfEagles;
                    dfs(i,j);
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n",++caseNum,numOfEagles);
    }
    return 0;
}
