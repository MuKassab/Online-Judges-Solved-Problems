#include <iostream>
#include <cstdio>

using namespace std;

string newLines[300];

int main()
{
    int patH, patW, h, w,s = 0;
    string a;
    char x;
    cin >> patH >> patW >> h >> w;
    for(int i = 0; i < patH; i++)
    {
        for(int j = 0; j < patW; j++)
        {
            cin >> x;
            a = "";
            for(int k = 0; k < w; k++)
                a += x;
            for(int l = 0; l < h; l++)
                newLines[s+l] += a;
        }
        s+=h;
    }
    for(int i = 0; i < 300; i++)
        if(newLines[i] != "") cout << newLines[i] << endl;
    return 0;
}
