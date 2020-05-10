#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    //freopen("i.txt","r",stdin);
    //freopen("o.txt","w",stdout);
    string a;
    int r,g,y = 5,sets = 0,lights,t,c,mini = 100;
    while(getline(cin,a))
    {
        ++sets;
        mini = 100;
        int sec[3700] = {0};
        lights = 0;
        for(int i = 0; i < a.length(); i+= 3)
        {
            ++lights;
            r = (a[i] - '0') * 10 + (a[i+1]-'0');
            g = r - y;
            //r += y;
            c = 0;
            while(c <= 3600)
            {
                sec[c]++;
                //cout << c << " -- " << c+r-5 << endl;
                sec[c+r-5]--;
                c += r+r;
            }
            mini = min(r-y,mini);
            //cout << " ------------------------------- " << endl;
        }
        t = -1;
        for(int i = 1; i <= 3600; i++)
            sec[i] += sec[i-1];
        //cout << lights << " ---- " << sec[24] << " ---- " << mini <<  endl;
        for(int i = mini+mini; i <= 3600; i++)
        {
            if(sec[i] == lights)
            {
                t = i;
                break;
            }
        }
        if(t != -1)
            printf("Set %d synchs again at %d minute(s) and %d second(s) after all turning green.\n",sets,t/60,t%60);
        else
            printf("Set %d is unable to synch after one hour.\n",sets);
    }
    return 0;
}
