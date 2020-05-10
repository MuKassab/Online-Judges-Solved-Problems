#include <iostream>

using namespace std;

int main()
{
    int numOfWords;
    string word;
    cin >> numOfWords;
    string words[numOfWords];
    for (int i = 0; i < numOfWords; i++)
    {
        cin >> word;
        words[i] = word;
    }
    for (int j = 0; j < numOfWords; j++)
    {
        int b = words[j].length();
        if (b <= 10)
        {
            cout << words[j] << endl;
        }

        else
        {
            cout << words[j].at(0) << words[j].length() - 2 << words[j].at(words[j].length() - 1) << endl;
        }

    }

    return 0;
}
