#include <iostream>
#include <queue>
#include <set>
#include <cstdio>

int testc, ct;
char turn[] = "XO";

using namespace std;

bool won(string check)
{
    if(check[0] != '.' && check[0] == check[1] && check[1] == check[2])
        return true;
    if(check[3] != '.' && check[4] == check[3] && check[4] == check[5])
        return true;
    if(check[6] != '.' && check[6] == check[7] && check[7] == check[8])
        return true;
    if(check[0] != '.' && check[0] == check[3] && check[3] == check[6])
        return true;
    if(check[1] != '.' && check[1] == check[4] && check[4] == check[7])
        return true;
    if(check[2] != '.' && check[2] == check[5] && check[5] == check[8])
        return true;
    if(check[0] != '.' && check[0] == check[4] && check[4] == check[8])
        return true;
    if(check[2] != '.' && check[2] == check[4] && check[4] == check[6])
        return true;
    for(int i = 0; i < 9; i++)
        if(check[i] == '.') return false;
    return true;
}

void createPossCases(set<string> &ans)
{
    queue< pair<string,int> >qu;
    string start = ".........", curr;
    ans.insert(start);
    qu.push({start,0});
    while(!qu.empty())
    {
        ct = qu.front().second;
        curr = qu.front().first;
        qu.pop();
        if(won(curr)) continue;
        for(int i = 0; i < 9; i++)
        {
            if(curr[i] != '.') continue;
            curr[i] = turn[ct];
            ans.insert(curr);
            qu.push({curr,1 - ct});
            curr[i] = '.';
        }
        //cout << curr << endl;
    }
}

int main()
{
    set<string> posAns;
    string in, x;
    int wer = 1;
    createPossCases(posAns);
    while(true)
    {
        cin >> in;
        if(in == "end")
            break;
        if(posAns.find(in) != posAns.end() && won(in))
            puts("valid");
        else
            puts("invalid");
    }
    return 0;
}

/*
XXO
OOX
XOX
*/
