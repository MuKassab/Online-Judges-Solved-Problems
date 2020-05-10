#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double len, torSp, rabSp, hour,minu,secs;
    cin >> len >> torSp >> rabSp;
    while(len && torSp && rabSp)
    {
        hour = abs((len/torSp) - (len/rabSp));
        //cout << hour;
        cout << floor(hour) << ":";
        minu = (hour - floor(hour)) * 60;
        if(floor(minu) < 10)
            cout << "0" << floor(minu) << ":";
        else
            cout << floor(minu) << ":";
        secs = (minu - floor(minu)) * 60;
        secs = round(secs);
        if(secs < 10)
            cout << "0" << secs << endl;
        else
            cout << secs << endl;
        cin >> len >> torSp >> rabSp;
    }
    return 0;
}
